#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry point
 * @argc: contains number of arguments to main
 * @argv: pointer to array of pointers of the arguments
 * passed to the program when it is executed
 *
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum += atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
