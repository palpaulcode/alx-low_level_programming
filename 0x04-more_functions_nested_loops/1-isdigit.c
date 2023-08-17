#include "main.h"

/**
 * _isdigit - checks whether a character is a digit
 * @c: the character to be checked
 *
 * Return: returns a 1 for digit character and 0 otherwise
 */

int _isupper(int c)
{
	/* if (c >= 48 && c <= 57) */
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
