# 0x07 C - Even more pointers, arrays and strings
Contains project tasks on advanced pointers, arrays and strings

## File `0-memset.c`
Contains a function that fills memory with constant byte.

## File `1-memcpy.c`
Copies memory bytes from memory area `src` to memory area `dest`

## File `2-trchr.c`
Locates a character `c` in a string `s` and returns pointer to it or returns `NULL` if the character is not found

## File `3-strspn.c`
Gets the length of a prefix substring

## File `4-strpbrk.c`
Function that searches a string for any of a set of bytes.

## File `5-strstr.c`
This file contains a function `_strstr()` that finds the first occurence of the substring `needle` in the string `haystack`. The terminating null bytes are not compared

## File `7-print_chessboard.c`
Prints a chessboard

## File `8-print_diagsums.c`
Function that prints the sun=m of the two diagonals of a swuare matrix of integers.

## File `100-set_string.c`
Sets the value of a pointer to a char

## File `101-crackme_password`
This file contains the password for the `crackme2` executable.
* Your file should contain the exact password, no new line, no extra space
* `ltrace`, `ldd`, `gdb` and `objdump` can help
* You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`
* Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0`
#### (This [link](https://github.com/be-great/crackme2) is very useful for solving this task)

