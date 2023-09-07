#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of values to reserve memory for
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(sizeof(int) * b);

	if (mem != NULL)
		return (mem);

	exit(98);
}
