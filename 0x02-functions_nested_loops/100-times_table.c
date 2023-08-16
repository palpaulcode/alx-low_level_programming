#include "main.h"

/**
 * prints_time_table - prints times table of a given  number starting with 0
 * @n: the number whose times table is to be printed
 *
 * Return: returns no value; has void return type
 */

void print_times_table(int n)
{
	int cnt;	/* counter for the first loop */
        int lp;		/* counter for the second loop */
	int res;	/* multiplication result */

	cnt = 0;
	
	if ((n > 0) && (n < 15))
	{
	while (cnt <= n)
	{
		_putchar('0');

		lp = 1;
		while (lp <= n)
		{
			res = cnt * lp;		/* result for multiplication */

			_putchar(44);
			_putchar(32);

			if (res < 10)
			{
				_putchar(' ');	/* append a space to values less than 10 */
				_putchar(' ');
				_putchar(' ');
			}
			else if (res >= 10 && res < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((res / 100) + '0');
				_putchar((res / 10) % 10 + '0');
			}

			_putchar((res % 10) + '0');
			lp++;
		}
		_putchar('\n');
		cnt++;
	}
	}

}
