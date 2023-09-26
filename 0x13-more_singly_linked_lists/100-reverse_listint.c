#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head pointer of the linked list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextnode, *prevnode, *currentnode;

	prevnode = NULL;
	nextnode = *head;
	currentnode = *head;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	*head = prevnode;

	return (*head);
}
