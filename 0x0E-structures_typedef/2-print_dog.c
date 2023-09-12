#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - prints 'struct dog'
 * @d: the variable of type 'struct dog' to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			(*d).name = "(nil)";

		if ((*d).owner == NULL)
			(*d).owner = "(nil)";

		printf("Name: %s\nAge: %.1f\nOwner: %s\n", (*d).name, d->age, (*d).owner);
	}
}
