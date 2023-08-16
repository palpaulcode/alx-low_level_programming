#include <stdio.h>

/**
 * fibonacci - prints fibonnaci numbers
 * @num: number of fibonnaci numbers to find
 *
 * Return: has void return type
 */
void fibonacci(int num)
{
	static long int f1;
	static long int f2 = 1;
	static long int fib;

	int counter = 0;
	f1 = 0;

	while (counter < num)
	{
		fib = f1 + f2;

		f1 = f2;
		f2 = fib;

		printf("%ld", fib);
		if (counter != (num - 1))
			printf(", ");

		counter++;
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
	printf("0, 1, ");
	fibonacci(50 - 2);
	return (0);
}
