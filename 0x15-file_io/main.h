#ifndef FILE_IO_H
#define FILE_IO_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>
#include <errno.h>

#define BUFFER 1024

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* elf header file functions */
void exit_error(const char *, const char *);
void get_elf_class(unsigned char);
void get_elf_data(unsigned char);
void get_elf_abi_version(unsigned char);
void get_elf_type(Elf64_Half);
void print_elf_header(const char *);
int is_elf_file(int);
void print_elf_magic(const Elf64_Ehdr *);

#endif /* end FILE_IO_H */
