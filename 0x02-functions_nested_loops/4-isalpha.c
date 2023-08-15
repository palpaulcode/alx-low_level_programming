#include "main.h"

/**
 * _isalpha - checks if cahracter is alphabet (lowercase or uppercase)
 * @c: character to be checked if it is lowercase or uppercase alphabet
 *
 * Return: returns 1 if c is lowercase or uppercase, otherwise returns 0
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
