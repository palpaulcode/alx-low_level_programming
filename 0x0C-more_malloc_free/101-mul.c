#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define ERR_MSG "Error"

/**
 * is_digit - check if string contains non digit char
 * @s: string to be evaluated
 *
 * Return: 0 if non digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: the string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0, j = 0;

	/*while (s[i] != '\0')
	{

		i++;
	}
	return (i);*/

	for (; s[i] != '\0'; i++)
		j++;
	return (j);
}
/**
 * errors - handle errors for main
 */
void errors(void)
{
	int i = 0;
	char st[] = "Error\n";

	while (i < 6)
	{
		_putchar(st[i]);
		i++;
	}
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0(success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int a, b, c, d, e, f, g, *result, i = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	a = _strlen(s1);
	b = _strlen(s2);
	c = a + b + 1;
	result = malloc(sizeof(int) * c);
	if (result == NULL)
		return (1);
	if (!result)
		return (1);
	for (d = 0; d <= a + b; d++)
		result[d] = 0;
	for (a = a - 1; a >= 0; a--)
	{
		f = s1[a] - '0';
		e = 0;
		for (b = _strlen(s2) - 1; b >= 0; b--)
		{
			g = s2[b] - '0';
			e = e + result[a + b + 1] + (f * g);
			result[a + b + 1] = e % 10;
			e /= 10;
		}
		if (e > 0)
			result[a + b + 1] += e;
	}
	for (d = 0; d < c - 1; d++)
	{
		if (result[d])
			i = 1;
		if (i)
			_putchar(result[d] + '0');
	}
	if (!i)
		_putchar('0');
	_putchar('\0');
	free(result);
	return (0);
}

