#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: the head of the list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *nodes;

	while (head != NULL)
	{
		nodes = head;
		head = head->next;
		free(nodes);
	}
}
