#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory used by variable of type dog_t
 * @d: varible of type dog_t to free resources from
 * Return: void
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	/*free((*d).age);*/
	free((*d).owner);
	free(d);
}
