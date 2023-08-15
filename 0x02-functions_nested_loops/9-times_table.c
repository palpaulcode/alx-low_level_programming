#include "main.h"

/**
 * times_table - prints the times table of 9 starting with 0
 *
 * Return: has no return value; is a void function
 */

void times_table(void)
{
	int l;		/* loop for the first while loop */
	int c;		/* counter for the second while loop */
	int r;		/* multiplication result */

	l = 0;
	while (l <= 9)
	{
		c = 0;
		while (c < 10)
		{
			r = c * l;			/* result from multiplication */

			if (r < 9)
				_putchar(' ');		/* append a space before values less than 10 */
			else
				_putchar((r / 10) + '0');

			_putchar((r % 10) + '0');

			if (c != 9)			/* make sure no comma and space at end of each line */
			{
				_putchar(44);		/* comma */
				_putchar(32);		/* space */
			}
			c++;
		}
		_putchar('\n');
		l++;
	}
}
