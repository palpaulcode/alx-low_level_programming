#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry point
 * @argc: no of arguments
 * @argv: pointer to array of pointers of arguments passed
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int byte, i;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	addr = (char *)main;

	for (i = 0; i < byte; i++)
	{
		printf("%.2hhx", addr[i]);
		if (i < byte - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
