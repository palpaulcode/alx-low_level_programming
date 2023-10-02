#include "main.h"
#include <unistd.h>

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 * @filename: pointer to the file to read from
 * @letters: letters to read
 *
 * Return: Number of letters it could read and print, or 0 for fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mem;
	ssize_t op, rd, wr;

	if (filename == NULL)
		return (0);

	mem = malloc(sizeof(char) * letters);

	if (mem == NULL) /* handle malloc return */
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(mem);
		return (0);
	}

	rd = read(op, mem, letters);
	if (rd == -1)
	{
		free(mem);
		return (0);
	}

	wr = write(STDOUT_FILENO, mem, letters);
	if (wr == -1)
	{
		free(mem);
		close(op);
		return (0);
	}

	close(op);

	return (wr);
}
