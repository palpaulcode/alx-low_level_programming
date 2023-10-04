#include "main.h"

/**
 * error - prints err and exits with given code
 * @code: exit code
 * @message: message to print
 * @file: name of file
 *
 * Return: void
 */
void error(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
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
	char *mem;

	if (argc != 3)
		error(97, "Usage: cp file_from file_to\n", "");

	src = argv[1];
	dest = argv[2];

	fd_from = open(src, O_RDONLY);
	if (fd_from == -1)
		error(98, "Error: Can't read from file %s\n", src);
	/**
	 * fd_to = open(dest, O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, S_IRUSR |
	 *		S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	 */
	fd_to = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error(99, "Error: Can't write to file %s\n", dest);

	mem = malloc(BUFFER);
	if (mem == NULL) /* handle malloc return */
		error(99, "Error: Memory allocation failed", "");

	do {
		rd = read(fd_from, mem, BUFFER);
		if (rd == -1)
			error(98, "Error: Can't read from file %s\n", src);
		wr = write(fd_to, mem, rd);
		if (wr == -1)
			error(99, "Error: Can't write to file %s\n", dest);
	} while (rd > 0);

	free(mem);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
