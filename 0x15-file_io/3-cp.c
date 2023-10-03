#include "main.h"

/**
 * error - prints err and exits with given code
 * @message: message to print
 * @code: exit code
 * @file: name of file
 *
 * Return: void
 */
void error(const char *message, int code, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}

/**
 * close_error - prints errer for closing
 * @message: message to print
 * @code: exit code
 * @id: id of the close
 *
 * Return: void
 */
void close_error(const char *message, int code, int id)
{
	dprintf(STDERR_FILENO,  message, id);
	exit(code);
}

/**
 * arg_error - print error for wrong args
 * @message: message to print
 * @code: exit code
 *
 * Return: void
 */
void arg_error(char *message, int code)
{
	dprintf(STDERR_FILENO, "%s", message);
	exit(code);
}

/**
 * main - program entry point
 * @argc: count of args
 * @argv: array of pointers
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	const char *src, *dest;
	ssize_t rd, wr;
	char mem[BUFFER];

	if (argc != 3)
		arg_error("Usage: cp file_from file_to\n", 97);

	src = argv[1];
	dest = argv[2];

	fd_from = open(src, O_RDONLY);
	if (fd_from == -1)
		error("Error: Can't read from file %s\n", 98, src);

	fd_to = open(dest, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
		error("Error: Can't write to file %s\n", 99, dest);

	while ((rd = read(fd_from, mem, BUFFER)) > 0)
	{
		wr = write(fd_to, mem, rd);
		if (wr == -1)
			error("Error: Can't write to file %s\n", 99, dest);
	}

	if (rd == -1)
		error("Error: Can't read from file %s\n", 98, src);
	if (close(fd_from) == -1)
		close_error("Error: Can't close fd %d\n", 100, fd_from);
	if (close(fd_to) == -1)
		close_error("Error: Can't close fd %d\n", 100, fd_to);

	return (0);
}
