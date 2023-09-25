#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of a listint_t list
 * @head: head pointer of the linked list
 * @n: the vakue to store at the node
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	temp = *head;

	newnode->n = n;
	newnode->next = temp;
	*head = newnode;

	return (*head);
}
