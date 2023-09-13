#include <stddef.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user
 * @s: operator (can be +, -, *, /, %)
 *
 * Return: result from selected function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i <= 4)
	{
		/**
		 * strcmp compares two strings and
		 * returns 0 if they are equal.
		 */
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
