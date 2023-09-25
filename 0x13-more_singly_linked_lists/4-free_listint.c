#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head pointer of the list to free
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
