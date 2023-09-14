#include <stdarg.h>
/**
 * sum_them_all - calculates sum of all arguments
 * @n: expected arguments
 *
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list = ap;
	int i, sum = 0;

	if (n == 0)
		return (sum);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}