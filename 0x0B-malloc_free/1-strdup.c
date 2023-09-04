#include <stdlib.h>

/**
 * _strdup - allocates a new sapce in memory which
 * contains a copy of a string goven as a parameter
 * @str: the string to make copy of
 *
 * Return: a pointer to the initialized array.
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *arr;
	unsigned int size = 1;

	while (str[j] != '\0')
	{
		size++;
		j++;
	}

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
