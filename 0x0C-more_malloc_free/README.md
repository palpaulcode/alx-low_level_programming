# 0x0C C - More malloc, free
This repository contains coding tasks for the aforementioned section in the C programming course part of the ALX_SE curriculum

## File `0-malloc-checked.c`
Theis file contains a function that allocates memory using malloc. It returns a pointer to the allocated memory. If `malloc` fails, the function in this file, `malloc_checked`, causes normal process termination with a status value of `98`

## File `1-string_nconcat.c`
This file contains a function that concatenates two strings. It returns a pointer that points to a newly allocated space int memory which contains `s1` followed by the first `n` bytes of `s2`, and null terminated. IF the function fails it returns `NULL`. If `n` is greater or equal to the length of `s2` then use the entire string `s2`. If `NULL` is passed treat as an empty string.

## File `2-calloc.c`
This file contains a function, `_calloc`, that allocates memory for an array, using `malloc`. The function allocates memory of an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory. The memory is set to zero. If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`. If `malloc` fails, then `_calloc` returns `NULL`.

## File `3-array_range.c`
This file contains a function that creates an array of integers. The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`. If `min` > `max` return `NULL`. If `malloc` fails, return `NULL`.

## File `100-realloc.c`
This file contains a function that reallocates a memory block using `malloc` and `free`.
* Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
* where `ptr` is a pointer to the memory previously allocated with a call to `malloc`: `malloc(old_size)`
* `old_size` is the size, in bytes, of the allocated space for `ptr`
* and `new_size` is the new size, in bytes of the new memory block
* The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes
* If `new_size` > `old_size`, the “added” memory should not be initialized
* If `new_size` == `old_size` do not do anything and return `ptr`
* If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`
* If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
* Don’t forget to free `ptr` when it makes sense
FYI: The standard library provides a different function: `realloc`. Run `man realloc` to learn more.
