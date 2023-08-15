#include "main.h"

/**
 * times_table - prints the times table of 9 starting with 0
 *
 * Return: has no return value; is a void function
 */

void times_table(void)
{
	int l;		/* loop */
	int c;		/* counter */

	l = 0;
	while (l <= 9)
	{
		c = 0;
		while (c < 10)
		{
			int r = c * l;		/* result */
			int t;

			t = (r / 10) + '0';

			if (t != '0')
				_putchar(t);

			_putchar((r % 10) + '0');
			if (c != 9)
			{
				_putchar(44);			/* comma */
				_putchar(32);			/* space */
			}
			c++;
		}
		_putchar('\n');
		l++;
	}
}
