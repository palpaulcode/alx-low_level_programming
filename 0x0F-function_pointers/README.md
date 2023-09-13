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


