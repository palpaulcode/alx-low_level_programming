#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_ch - prints a character
 * @arg: argument variable of type va_list
 *
 * Return: void
 */
void print_ch(va_list arg)
{
	char ch;

	/* a char variable will be promoted to an int */
	/* acharacter literal is a specical type of int in C */
	ch = va_arg(arg, int);

	printf("%c", ch);
}
/**
 * print_int - prints an int
 * @arg: argument variable of type va_list
 *
 * Return: void
 */
void print_int(va_list arg)
{
	int x;

	x = va_arg(arg, int);

	printf("%d", x);
}
/**
 * print_fl - prints a float
 * @arg: argument variable of type va_list
 *
 * Return: void
 */
void print_fl(va_list arg)
{
	float fl;

	/* float is promoted to a double */
	fl = va_arg(arg, double);

	printf("%f", fl);
}
/**
 * print_st - prints a string
 * @arg: argument variable of type va_list
 *
 * Return: void
 */
void print_st(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: format to use when printing
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;

	unsigned int i = 0, ctrl = 0;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				print_ch(ap);
				ctrl = 0;
				break;
			case 'i':
				print_int(ap);
				ctrl = 0;
				break;
			case 'f':
				print_fl(ap);
				ctrl = 0;
				break;
			case 's':
				print_st(ap);
				ctrl = 0;
				break;
			default:
				ctrl = 1;
				break;
		}
		if (format[i + 1] != '\0' && ctrl != 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
