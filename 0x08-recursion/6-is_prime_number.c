/**
 * n_is_prime - chaecks if a number is prime
 * @i: number to check if prime
 * @j: the iterate value
 *
 * Return: 1 if i is prime and 0 if not
 */
int n_is_prime(int i, int j)
{
	if (j == 1)
		return (1);
	if (i % j == 0)
		return (0);
	return (n_is_prime(i, j - 1));
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: integer to be checked
 *
 *Return: returns 1 if n is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (n_is_prime(n, n - 1));
}
