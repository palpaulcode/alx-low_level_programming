#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to append to the file
 *
 * Return: 1 on success, -1 on filure
 */
int append_text_to_file(const char *filename, char *text_content)
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

	op = open(filename, O_WRONLY | O_APPEND);
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
