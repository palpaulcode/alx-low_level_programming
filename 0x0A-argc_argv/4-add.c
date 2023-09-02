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
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
