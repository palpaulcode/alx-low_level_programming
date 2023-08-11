#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
