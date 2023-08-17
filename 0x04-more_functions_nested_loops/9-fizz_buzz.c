#include <stdio.h>
#include "main.h"

/**
 * main - Entry to the program
 * Description - Fizz Buzz test
 *
 * Return: 0 for success
 */

int main(void)
{
	int num = 1;

	for (; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if(num < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
