# 0x0C C - More malloc, free
This repository contains coding tasks for the aforementioned section in the C programming course part of the ALX_SE curriculum

## File `0-malloc-checked.c`
Theis file contains a function that allocates memory using malloc. It returns a pointer to the allocated memory. If `malloc` fails, the function in this file, `malloc_checked`, causes normal process termination with a status value of `98`

## File `1-string_nconcat.c`
This file contains a function that concatenates two strings. It returns a pointer that points to a newly allocated space int memory which contains `s1` followed by the first `n` bytes of `s2`, and null terminated. IF the function fails it returns `NULL`. If `n` is greater or equal to the length of `s2` then use the entire string `s2`. If `NULL` is passed treat as an empty string.

## File `2-calloc.c`
This file contains a function, `_calloc`, that allocates memory for an array, using `malloc`. The function allocates memory of an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory. The memory is set to zero. If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`. If `malloc` fails, then `_calloc` returns `NULL`.


