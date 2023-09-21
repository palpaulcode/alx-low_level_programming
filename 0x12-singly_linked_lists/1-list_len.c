#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: the linked list
 *
 * Return: number of elements in linked list h
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
