#include <stdio.h>

/**
 * fibonacci - prints sum of fibonnaci numbers whose value
 * is less than 4,000,000
 *
 * Return: has void return type
 */
void fibonacci(void)
{
	static long int f1;
	static long int f2 = 1;
	static long int fib;
	static long int sum;

	f1 = 0;
	fib = 0;
	sum = 0;

	while (fib < 4000000)
	{
		fib = f1 + f2;

		f1 = f2;
		f2 = fib;

		sum = sum + fib;

		printf("%ld", sum);
	}
	printf("\n");
}

/**
 * main - Entry point to our program
 *
 * Return: returns 0 for success
 */

int main(void)
{
	fibonacci();
	return (0);
}
