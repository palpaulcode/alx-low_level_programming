#include <stdlib.h>
#include "main.h"
/**
 * check_no - checks if character is a number
 * @c: character to check
 *
 * Return: 1 if c is number, 0 otherwise
 */
int check_no(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * print_err - prints error message
 *
 * Return: void
 */
void print_err(void)
{
	int i = 0;
	char err[] = "Error";

	while (err[i] != '\0')
	{
		_putchar(err[i]);
		i++;
	}
	_putchar('\n');

	exit(98);
}
/**
 * str_len - counts length of a string
 * @c: the string to get length of
 *
 * Return: length of the string
 */
int str_len(char *c)
{
	int i, len = 0;

	for (i = 0; c[i] != '\0'; i++)
		len++;

	return (len);
}
/**
 * misc - calculates last part of main
 * @tlen: total string length
 * @mem: pointer to memory block
 * Return: void
 */
void misc(int tlen, int *mem)
{
	int i, j = 0;

	for (i = 0; i < tlen - 1; i++)
	{
		if (mem[i])
			j = 1;
		if (j)
			_putchar(mem[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(mem);
}
/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int s1len, s2len, tlen, *mem, a, no1, no2, cf;

	num1 = argv[1];
	num2 = argv[2];
	if (argc != 3 || !check_no(num1) || !check_no(num2))
		print_err();
	/* get str len*/
	s1len = str_len(num1);
	s2len = str_len(num2);
	tlen = s1len + s2len + 1;
	mem = malloc(sizeof(int) * tlen);
	if (mem == NULL)
		return (1);/* print_err() */
	if (!mem)
		return (1);
	for (a = 0; a < (s1len + s2len); a++)
		mem[a] = 0;
	for (s1len = s1len - 1; s1len >= 0; s1len--)
	{
		no1 = num1[s1len] - '0';
		cf = 0;
		for (s2len = str_len(num2) - 1; s2len >= 0; s2len--)
		{
			no2 = num2[s2len] - '0';
			cf = cf + mem[s1len + s2len + 1] + (no1 * no2);
			mem[s1len + s2len + 1] = cf % 10;
			cf = cf / 10;
		}
		if (cf > 0)
			mem[s1len + s2len + 1] += cf;
	}
	misc(tlen, mem);
	return (0);
}
