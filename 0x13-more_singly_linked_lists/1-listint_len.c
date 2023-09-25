#include "lists.h"

/**
 * listint_len - counts no. of elements in a linked list of type listint_t
 * @h: head pointer of the linked list
 *
 * Return: number if elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
