#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the size of various types it
 * is compiled and run on 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char type_c;
	int type_i;
	long int type_li;
	long long int type_lli;
	float type_f;
	
	/* Print size of the values */
	printf("Size of a char: %zu byte(s)\n", sizeof(type_c));
	printf("Size of an int: %zu byte(s)\n", sizeof(type_i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(type_li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(type_lli));
	printf("Size of a float: %zu byte(s)\n", sizeof(type_f));
}
