#include <stdlib.h>

/**
 * create_array - creates array of chars and
 * initializes it with a specific char
 * @size: size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the initialized array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	char *arr = malloc(sizeof(c) * size);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
