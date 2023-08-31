/**
 * factorial - calculate factorial of a given number
 * @n: number to calculate factorial for
 *
 * Return: factorial for number, -1 for error if number is less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
