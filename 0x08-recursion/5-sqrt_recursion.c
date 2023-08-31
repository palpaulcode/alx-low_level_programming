/**
 * n_sqrt - find square root
 * @i: number to test
 * @j: square of the number
 *
 * Return: square root of i
 */
int n_sqrt(int i, int j)
{
	/* if (i * i > j) */
	if (i > j / 2)
		return (-1);
	if (i * i == j)
		return (i);
	return (n_sqrt(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get square root of
 *
 * Return: square root, -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n_sqrt(0, n));
}
