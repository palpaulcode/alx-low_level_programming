#include <stddef.h>
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to search from
 * @accept: string to check for in string 's'
 *
 * Return: returns a pointer to the bytes in 's' that
 * matches one of the bytes in 'accept' or 'NULL' if
 * no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (NULL);
}
