#include <stdio.h>
#include <math.h>


int isprime(long int);

long int prime_factors(long int);

/**
 * main - Entry point to the program
 *
 * Return: 0 for success
 */

int main(void)
{
	long int largest = prime_factors(612852475143);

	printf("%lx\n", largest);

	return (0);
}

/**
 * isprime - check if number is prime
 * @n: number to check if is prime
 *
 * Return: returns 0 if number is prime and 1 if not
 */

int isprime(long int n)
{
	int i;

	for (i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * prime_factors - checks all prime factors of a number
 * @n: number to find prime factors
 *
 * Return: returns the largest prime factor
 */
long int prime_factors(long int n)
{
	long int largest;
	long int i;

	for (i = 2; i < n; i++)
	{
		if (isprime(i) == 1)
		{
			long int x = n;

			while (x % i == 0)
			{
				/* print the primes as they are calculated*/
				printf("%ld ", i); 
				largest = i; /* the last prime is assigned */
				x /= i;
			}
		}
	}
	return (largest);
}
