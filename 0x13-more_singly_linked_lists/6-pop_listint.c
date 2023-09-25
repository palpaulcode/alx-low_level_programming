#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the head node of the list
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	/* if head is NULL return 0 */
	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	temp = *head; /* assign address held at head to temp */
	val = temp->n; /* value at head node */
	*head = temp->next; /* assign new address to head */
	free(temp); /* free previous node referenced by head*/

	return (val);
}
