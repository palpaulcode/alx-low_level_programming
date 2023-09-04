#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates two strings
 * Description: concatenates two strings. Similar to _strcat
 * in task 0-strcat.c except that it copies n bytes from
 * src and src does not need to be null-terminated if it
 * contains n or more bytes
 * @dest: the first string to contenate the second one to
 * @src: the second string
 * @n: the size to cut from str 2
 *
 * Return: returns the concatenation of the entire string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
