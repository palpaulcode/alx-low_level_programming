#include <stdio.h>

/**
 * before_main - attribute constructor is used to
 * execute a function beofer the main function
 */
void before_main(void)__attribute__((constructor));

/**
 * before_main - this function executes before main
 *
 * Return: void
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

