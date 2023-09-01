#include <stdio.h>
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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
