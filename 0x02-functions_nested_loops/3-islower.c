#include "main.h"

/**
 * _islower - checks if letter is lowercase
 * @c: this is the value to be checked if it is lowercase
 *
 * Return: returns 1 if c is lowercase, otherwise returns 0
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
