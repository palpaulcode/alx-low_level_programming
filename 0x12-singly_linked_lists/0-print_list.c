#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a 'list_t' list
 * @h: a pointer to the head element of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str != NULL)
		{
			printf("[%d] ", temp->len);
			printf("%s\n", temp->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
