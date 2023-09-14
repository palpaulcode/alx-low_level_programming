#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name in uppercase and/or lowercase
 * @name: the name to print
 * @f: function pointer - points to the printing function
 *
 * Return: function returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
