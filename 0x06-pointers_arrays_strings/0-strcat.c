#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 * Description: removes the terminating null byte from the
 * first string, appends the second string and adds the 
 * terminating null byte
 * @dest: the first string to contenate the second one to
 * @src: the second string
 *
 * Return: returns the concatenation of the entire string
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[n] = src[i]; 
		i++;
		n++;
	}

	dest[n] = '\0';

	return (dest);
}
