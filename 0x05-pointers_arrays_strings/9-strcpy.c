#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcpy - copies a string to a buffer
 * @dest: the buffer to copy to
 * @src: the string to copy from
 *
 * Return: returns the copied string buffer
 */
char *_strcpy(char  *dest, char *src)
{
	int n = 0;

	int len = strlen(src);

	for (; n < len; n++)
	{
		dest[n] = src[n];
	}

	dest = '\0';

	return (dest);
}
