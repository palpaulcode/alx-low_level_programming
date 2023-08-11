#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints whether generated number is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int lastd;

	lastd = n % 10;

	printf("Last digit of %d is %d and ", n, lastd);

	if (lastd > 5)
	{
		printf("is greater than 5\n");
	}
	else if (lastd == 0)
	{
		printf("and is 0\n");
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
}
