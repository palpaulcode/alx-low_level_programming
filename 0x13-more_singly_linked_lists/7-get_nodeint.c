#include "lists.h"

/**
 * get_nodeint_at_index - returns node at given index
 * @head: the head pointer of the linked list
 * @index: index of node to get starting at 0
 *
 * Return: node at given index or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0, i = 0;
	listint_t *node, *temp, *temp2;

	if (head == NULL)
		return (NULL);

	temp = head;
	temp2 = head;

	/* get length of the list */
	while (temp2->next != NULL)
	{
		temp2 = temp2->next;
		count++;
	}

	/* if index is greater than total no. of elements*/
	if (index > count)
		return (NULL);

	while (temp != NULL && (i <= index))
	{
		node = temp;
		temp = temp->next;
		i++;
	}

	return (node);
}
