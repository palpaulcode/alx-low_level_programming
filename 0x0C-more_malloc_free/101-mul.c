#include <stdlib.h>
#include "main.h"

int check_no(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
	}
	return (1);
}

void print_err(void)
{
	int i = 0;

	char err[] = "Error";
	while (err[i])
	{
		_putchar(err[i]);
		i++;
	}
	_putchar('\n');

	exit(98);
}

int str_len(char *c)
{
	int len;

	for (len = 0; c[len] != '\0'; len++)
		;

	return (len);
}
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int s1len, s2len, tlen, *mem, a, no1, no2, cf, i, j = 0;

	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3 || check_no(num1) || check_no(num2))
		print_err();

	/* get str len*/
	s1len = str_len(num1);
	s2len = str_len(num2);

	tlen = s1len + s2len + 1;

	mem = malloc(sizeof(int) * tlen);

	if (mem == NULL)
		return (1);/* print_err() */

	for (a = 0; a < (s1len + s2len); a++)
		mem[a] = 0;

	s1len = s1len -  1;
	while (s1len >= 0)
	{
		no1 = num1[s1len] - '0';
		cf = 0;
		s2len = s2len - 1;
		while (s2len >= 0)
		{
			no2 = num2[s2len] - '0';
			cf = cf + mem[s1len + s2len + 1] + (no1 * no2);
			mem[s1len + s2len + 1] = cf % 10;
			cf = cf / 10;
			s2len--;
		}
		if (cf > 0)
			mem[s1len + s2len + 1] += cf;
		s1len--;
	}
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
	return (0);
}
