#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 * Description: removes the terminating null byte from the
 * first string, appends the second string and adds the
 * terminating null byte
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
	while (src[i] != '\0' && n > 0)
	{
		dest[j] = src[n];
		i++;
		j++;
		n--;
	}

	return (dest);
}
