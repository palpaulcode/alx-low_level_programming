#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: head pointer of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0, i = 0;
	listint_t *temp, *newnode;

	if (head == NULL)
		return (NULL);
	temp = *head;
	/* get number of nodes in the list */
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL) /* handle malloc return */
		return (NULL);

	newnode->n = n; /* newnode data */
	newnode->next = NULL;
	if (idx > count) /* if index is greater or less than available nodes */
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		temp = *head; /* reassign temp to head */
		while (i < idx - 1) /* traverse list to move to insert position */
		{
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next; /* give newnode its right link */
		temp->next = newnode; /* give newnode its left link */
	}
	return (newnode);
}
