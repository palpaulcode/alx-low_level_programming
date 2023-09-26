#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: head of the linked list
 * @index: index to delete at
 *
 * Return: 1 for success -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *nextnode;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		nextnode = (*head)->next;
		free(*head);
		*head = nextnode;
		return (1);
	}

	temp = *head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	nextnode = temp->next;
	temp->next = nextnode->next;

	free(nextnode);

	return (1);
}
