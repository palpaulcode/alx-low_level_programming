#include <stdlib.h>
#include <math.h>
/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: the memory to reallocate
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: pointer to the new memory address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *block, *tmp_ptr = ptr;
	unsigned int i, min_size;

	/* if (new_size > old_size) */

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		block = malloc(new_size);
		return (block);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	block = malloc(new_size); /* reserve new memory */

	if (block == NULL) /* handle malloc return */
		return (NULL);

	if (old_size < new_size)
		min_size = old_size;
	else
		min_size = new_size;

	for (i = 0; i < min_size; i++)
		block[i] = tmp_ptr[i];

	free(ptr);

	return (block);
}
