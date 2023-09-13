#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - program entry point
 * @argc: argument count
 * @argv: array of arguments passed
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int res, a, b;
	int (*fun)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fun = (*get_op_func(argv[2]));

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = fun(a, b);

	printf("%d\n", res);

	return (0);
}
