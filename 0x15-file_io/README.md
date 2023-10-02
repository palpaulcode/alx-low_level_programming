# 0x15 C - File I/O
This repository contains solutions to coding tasks from the aforementioned section in the C course within the ALX_SE curriculum

## File `0-read_textfile.c`
This file contains a function that reads a text file and prints it to the `POSIX` standard output.
* Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
* where letters is the number of letters it should read and print
* returns the actual number of letters it could read and print
* if the file can not be opened or read, return `0`
* if `filename` is `NULL` return `0`
* if `write` fails or does not write the expected amount of bytes, return `0`


