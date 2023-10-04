#include "main.h"

/**
 * error - prints err and exits with given code
 * @message: message to print
 * @code: exit code
 * @file: name of file
 * @fd_from: src file descriptor
 * @fd_to: dest file descriptor
 *
 * Return: void
 */
void error(const char *message, int code, const char *file,
		int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, message, file);
	if (fd_from != -1)
		close(fd_from);
	if (fd_from != -1)
		close(fd_to);
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
 * close_fd - close file descriptor
 * @fd: file descriptor to close
 * Description: if cannot close a file descriptor , exit with
 * code 100 and print Error: Can't close fd FD_VALUE, followed
 * by a new line, on the POSIX standard error
 * where FD_VALUE is the value of the file descriptor
 *
 * Return: void
 */
void close_fd(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
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
		error("Error: Can't read from file %s\n", 98, src, fd_from, -1);

	fd_to = open(dest, O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
		error("Error: Can't write to file %s\n", 99, dest, fd_from, fd_to);

	while ((rd = read(fd_from, mem, BUFFER)) > 0)
	{
		wr = write(fd_to, mem, rd);
		if (wr == -1)
			error("Error: Can't write to file %s\n", 99, dest, fd_from, fd_to);
	}
	if (rd == -1)
		error("Error: Can't read from file %s\n", 98, src, fd_from, fd_to);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
