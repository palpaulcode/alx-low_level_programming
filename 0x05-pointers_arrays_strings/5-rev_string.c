#include <string.h>
#include "main.h"
/**
 * rev_string - prints a string in reverse followed by a new line
 * @s: the string to be reversed
 *
 * Return: has no return value
 */
void rev_string(char *s)
{
	int arrlen;
	int i = 0;
	char tmp;
	char *start;
	char *end = s;

	arrlen = 1;
	while (s[arrlen] != '\0')
	{
		arrlen++;
		end++;
	}

	start = s;
	/* printf("Size:%d\n", arrlen); */
	while (i < (arrlen / 2))
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		i++;
		start++;
		end--;
	}
}
