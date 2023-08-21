#include "main.h"

/**
 * _atoi - conversta string to an integer
 * @s: string to convert to integer
 *
 * Return: on success return the integer from conversion,
 * 0 on failure
 */
int _atoi(char *s)
{
	int res = 0;

	int sign = 1;
	int i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return 0;

		res = res * 10 + s[i] - '0';
		i++;
	}
	res *= sign;

	return (res);
}
