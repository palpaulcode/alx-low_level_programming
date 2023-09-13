#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints name in uppercase and/or lowercase
 * @name: the name to print
 * @f: callback function to do the actual printing
 *
 * Return: this function returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
