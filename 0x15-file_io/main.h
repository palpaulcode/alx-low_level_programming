#ifndef FILE_IO_H
#define FILE_IO_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);


#endif /* end FILE_IO_H */
