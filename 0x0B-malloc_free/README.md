# 0x0B C - `malloc`, `free`
Function `malloc` is used to explicitly assign memory to a program whereas function `free`, as its name implies, is used to release the assigned memory when a program is done with its memory needs.
This directory contains project tasks on this section in the C course contained in the ALX_SE program.

## File `0-create_array.c`
This file contains a function that creates an array and initializes it with a specific char.

## File `1-strdup.c`
This file contains a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

## File `2-str_concat.c`
This file contains a function that concatenates two strings. The returned pointer points to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated. 
The working of this function is similar to [this](https://github.com/palpaulcode/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c) function except that here the copy is being done to a new memory location instead of appending the second string to the first

## File `3-alloc_grid.c`
File contains a function that returns a pointer to a 2-D array of integers. Each element of the grid is initialized to `0`. The function returns `NULL` on failure. If `width` or `height` of the grid is `0` or negative, the function returns `NULL`.

## File `4-free_grid.c`
This file contains a function that frees a 2-dimensional grid previously created by `alloc_grid` function above. 

## File `100-argstostr.c`
This file contains a function that concatenates all the arguments of your program, assigns the concatenated string a new memory address, and returns a pointer to the new string. Each argument is followed by a `\n` in this new string. The function returns `NULL` if `ac == 0` or `av == NULL`.


