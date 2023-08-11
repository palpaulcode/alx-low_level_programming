# Project File Descriptions

## File 0-preprocessor
Runs a `C` file through the preprocessor and saves the 
result in another file named `c`.

## File 1-compiler
Compiles a `C` file but does not link. The `C` file is
saved in variable `$CFILE`. The output file is named 
the same as the C file but with the extension `.o`.

## File 2-assembler
Generates the assembly code of a `C` code and saves
it in an output file swith the same name as the `C`
file but with the extension `.s`. The C file is saved
in variable `$CFILE`.

## File 3-name
Compiles `C` file saved in variable `$CFILE` and 
creates an executable called `cisfun`.

## File 4-puts.c
A `C` program that prints a string of characters 
using function `puts` followed by a new line.

## File 5-printf.c
A `C` program that prints a string of characters 
followed by a new line using function `printf`.

## File 6-size.c
Prints the size of various data types it is 
compiled and  run on in the computer.

## File 100-intel
This script generates the assembly code of C code
using Intel syntax. The C file name is saved in 
variable `$CFILE`. 

## File 101-quote.c
Prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error. Does not use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`. Program returns 1.


