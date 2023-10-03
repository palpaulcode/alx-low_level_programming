#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on filure
 */
int create_file(const char *filename, char *text_content)
{
	int op, str_len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[str_len])
		{
			str_len++;
		}
	}

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (op == -1)
		return (-1);

	wr = write(op, text_content, str_len);
	if (wr == -1)
	{
		close(op);
		return (-1);
	}

	close(op);
	return (1);
}
