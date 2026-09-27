#!/usr/bin/env bash
# Regression runner: builds and runs every sim/tb_*.sv, then reports a pass rate.
# Usage: ./regress.sh [tb_name ...]   (default: all testbenches in sim/)
# Env:   REGRESS_TIMEOUT (seconds per sim, default 60)

SRC_DIR=src
SIM_DIR=sim
INC_DIR=include
OUT_DIR=obj_dir/regress
TIMEOUT=${REGRESS_TIMEOUT:-60}

RED=$'\033[31m'; GRN=$'\033[32m'; YEL=$'\033[33m'; BLD=$'\033[1m'; RST=$'\033[0m'

if [ $# -gt 0 ]; then
    TARGETS=("$@")
else
    TARGETS=()
    for f in "$SIM_DIR"/tb_*.sv; do
        n=$(basename "$f" .sv); TARGETS+=("${n#tb_}")
    done
fi

mapfile -t SOURCES < <(find "$SRC_DIR" -name "*.sv")
mapfile -t INCLUDES < <(find "$INC_DIR" \( -name "*.sv" -o -name "*.svh" \) ! -name CORE_PKG.svh)

mkdir -p "$OUT_DIR"

total_pass=0; total_fail=0
tb_ok=0; tb_bad=0
declare -a SUMMARY

for t in "${TARGETS[@]}"; do
    tb="tb_$t"
    mdir="$OUT_DIR/$tb"
    log="$OUT_DIR/$tb.log"
    printf "%-36s " "$tb"

    if [ ! -f "$SIM_DIR/$tb.sv" ]; then
        echo "${RED}MISSING${RST}"
        SUMMARY+=("$(printf '%-36s %s' "$tb" "${RED}MISSING${RST}")"); tb_bad=$((tb_bad + 1)); continue
    fi

    if ! verilator --binary --timing -Wall -Wno-fatal --trace-fst --trace-structs \
            -I"$INC_DIR" --top-module "$tb" --Mdir "$mdir" -j 0 \
            "$INC_DIR/CORE_PKG.svh" "${INCLUDES[@]}" "$SIM_DIR/$tb.sv" "${SOURCES[@]}" \
            > "$log" 2>&1; then
        echo "${RED}COMPILE ERROR${RST}  (see $log)"
        SUMMARY+=("$(printf '%-36s %s' "$tb" "${RED}COMPILE ERROR${RST}")"); tb_bad=$((tb_bad + 1)); continue
    fi

    # Run from inside the build dir so waveform dumps land there
    ( cd "$mdir" && timeout "$TIMEOUT" "./V$tb" ) >> "$log" 2>&1
    rc=$?

    clean=$(sed 's/\x1b\[[0-9;]*m//g' "$log")
    p=$(grep -c '^\s*\[PASS\]' <<< "$clean")
    f=$(grep -c '^\s*\[FAIL\]' <<< "$clean")
    total_pass=$((total_pass + p)); total_fail=$((total_fail + f))

    if [ $rc -eq 124 ]; then
        status="${RED}TIMEOUT${RST}"; tb_bad=$((tb_bad + 1))
    elif [ $rc -ne 0 ]; then
        status="${RED}CRASH (rc=$rc)${RST}"; tb_bad=$((tb_bad + 1))
    elif [ $((p + f)) -eq 0 ]; then
        status="${YEL}NO TESTS${RST}"; tb_bad=$((tb_bad + 1))
    elif [ "$f" -gt 0 ]; then
        status="${RED}FAIL${RST}"; tb_bad=$((tb_bad + 1))
    else
        status="${GRN}PASS${RST}"; tb_ok=$((tb_ok + 1))
    fi
    line="$status  $p/$((p + f)) passed"
    echo "$line"
    SUMMARY+=("$(printf '%-36s %s' "$tb" "$line")")
done

total=$((total_pass + total_fail))
ntb=$((tb_ok + tb_bad))
rate() { if [ "$2" -eq 0 ]; then echo "0.0"; else awk "BEGIN{printf \"%.1f\", 100*$1/$2}"; fi; }

echo ""
echo "${BLD}==================== REGRESSION SUMMARY ====================${RST}"
printf '%s\n' "${SUMMARY[@]}"
echo "------------------------------------------------------------"
echo "Testbenches: $tb_ok/$ntb clean ($(rate $tb_ok $ntb)%)"
echo "Tests:       $total_pass/$total passed ($(rate $total_pass $total)%)"
echo "Logs:        $OUT_DIR/"
echo "${BLD}============================================================${RST}"

[ $tb_bad -eq 0 ]
