#include "lists.h"

/**
 * find_listint_loop - finds loop in a linked list
 * @head: head pointer of the linked list
 *
 * Return: address of node where loop starts or
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr;
	listint_t *fast_ptr;

	if (head == NULL)
		return (NULL);

	slow_ptr = head;
	fast_ptr = head;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
			return (fast_ptr);
	}

	return (NULL);
}
