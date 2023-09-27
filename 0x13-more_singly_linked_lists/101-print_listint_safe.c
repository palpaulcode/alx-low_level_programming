#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head pointer of the linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t count  = 0;
	long int t_df;

	if (head == NULL)
		exit(98);

	temp = head;

	if (temp == NULL || !temp)
		exit(98);

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		t_df = temp - temp->next;
		count++;

		if (t_df > 0)
		{
			temp = temp->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			break;
		}
	}

	return (count);
}
