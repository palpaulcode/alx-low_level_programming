#include "lists.h"

/**
 * print_listint_safe - prints a linked list safely
 * @head: head pointer of the linked list
 *
 * Return: no. of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr;
	const listint_t *fast_ptr;
	size_t count = 0;

	if (head == NULL || head->next == NULL)
		exit(98);

	slow_ptr = head;
	fast_ptr = head;
	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;

		if (slow_ptr == fast_ptr)/*loop detected*/
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			printf(" [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			printf("-> [%p] %d\n", (void *)fast_ptr->next, fast_ptr->next->n);
		 	return (count);
		}
	}
	return (count);
}
