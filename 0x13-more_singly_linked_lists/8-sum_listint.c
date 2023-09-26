#include "lists.h"

/**
 * sum_listint - get sum of all data of a listint_t linked list
 * @head: head of the linked list
 *
 * Return: sum of all data of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (sum);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
