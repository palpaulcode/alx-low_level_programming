# 0x0F C - Function Pointers
This repository contains solutions to coding tasks from the aforementioned section of the C programming course within the ALX_SE program.

## File `0-print_name.c`
This file contains a function that prints a name.
* Prototype: `void print_name(char *name, void (*f)(char *));`

## File `1-array_iterator.c`
This file contains a function that executes a function given as a parameter on each element of an array
* Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
* where `size` is the size of the array
* and `action` is a pointer to the function you need to use

## File `2-int_index.c`
This file contains a fuction that searches for an integer.
* Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
* where `size` is the number of elements in the array `array`
* `cmp` is a pointer to the function to be used to compare values
* `int_index` returns the index of the first element for which the `cmp` function does not return `0`
* If no element matches, return `-1`
* If size <= `0`, return `-1`

## Files `3-main.c`, `3-op_functions.c`, `3-get_op_func.c`,`3-calc.h`
These files write a program that performs simple operations.
### File `calc.h`
This file contains all the function prototypes and data structures used by the program.
### File `3-op_functions.c`
This file contains the 5 primary functions used in the program
### File `3-get_op_func.c`
This file contains the function that selects the correct function to perform the operation asked by the user.
### File `3-main.c`
This file contains the main function only.

## File `100-main_opcodes.c`
This file prints the [opcodes](https://en.wikipedia.org/wiki/Opcode) of its own main function
* Usage: `./main number_of_bytes`
* Output format:
	* the opcodes should be printed in hexadecimal, lowercase
	* each opcode is two char long
	* listing ends with a new line
* You are allowed to use `printf` and `atoi`
* You have to use `atoi` to convert the argument to an `int`
* If the number of argument is not the correct one, print `Error`, followed by a new line, and exit with the status `1`
* If the number of bytes is negative, print `Error`, followed by a new line, and exit with the status `2`
