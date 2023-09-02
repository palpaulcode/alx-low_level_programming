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
	int num, loop, coin_count = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		/* coins entered */
		num = atoi(argv[1]);

		for (loop = 0; loop < 5 && num >= 0; loop++)
		{
			while (num >= coins[loop])
			{
				num = num - coins[loop];
				coin_count++;
			}
		}
		printf("%d\n", coin_count);
	}
	return (0);
}
