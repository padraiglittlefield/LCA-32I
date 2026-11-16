Usage
```
make check TOP=<module>   # elaborate only
make rtl   TOP=<module>   # word-level netlist + schematic
make synth TOP=<module>   # generic gate netlist + schematic
make map   TOP=<module>   # sky130-mapped netlist (for OpenSTA)
make clean
```
