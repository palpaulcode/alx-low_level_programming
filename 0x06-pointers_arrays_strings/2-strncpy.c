#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - copies a string to a buffer
 * @dest: the buffer to copy to
 * @src: the string to copy from
 * @n: bytes to copy from str2 to str1
 *
 * Return: returns the copied string buffer
 */
char *_strncpy(char  *dest, char *src, int n)
{
	int i = 0;

	int len = strlen(src);

	for (; i < len && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
