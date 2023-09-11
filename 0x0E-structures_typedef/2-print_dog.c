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
		if (!(*d).name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);

		if (!(*d).age)
			printf("Age: (nil)\n");
		else
			printf("Age: %.1f\n", (*d).age);

		if (!(*d).owner)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
