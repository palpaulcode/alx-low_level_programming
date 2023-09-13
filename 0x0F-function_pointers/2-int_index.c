#include <stddef.h>
/**
 * int_index - searches for a integer in an array
 * @array: the array to search integer from
 * @size: size of array to search integer from
 * @cmp: compare function to check if integer is
 * found in array
 *
 * Return: index of first element for which the cmp
 * function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
