#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer 
 * @size: bytes of buffer pointed by b
 *
 * Return: returns void
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size <= 0) /* if size is 0 or less, print new line only */
	{
		printf("\n");
	}
	else
	{
		/* output should be 10 bytes per line so increment by 10 */
		for (; i < size; i += 10)
		{
			/* first byte of each line in hex (8 chars) */
			printf("%08x: ", i); 
			for (j = 0; j < 10; j++)
			{
				if(j % 2 == 0 && j > 0)
					printf(" ");
				/* each line shows hex content (2 chars) of 
				   buffer 2 bytes at a time ... */
				if (j + i > size - 1)
					printf(" "); /* ... separated by space */
				else
					printf("%.2x", b[j + i]);
			}
			printf(" ");
			for (j = 0; j < 10; j++)
			{
				if (j + i > size -1)
					break;
				/* if byte is printable character, print 
				   the letter, if not, print . */
				if(b[j + i] >= ' ' && b[j + i] <= '~')
					printf("%c", b[j + i]);
				else
					printf(".");
			}
			printf("\n"); /* each line ends with '\n' */
		}
	}
}
