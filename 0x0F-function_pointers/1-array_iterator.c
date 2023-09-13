#include <stddef.h>
/**
 * array_iterator - executes a function on each element of array
 * @array: the array to get elements of
 * @size: size of the array
 * @action: the function to execute for each array element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
