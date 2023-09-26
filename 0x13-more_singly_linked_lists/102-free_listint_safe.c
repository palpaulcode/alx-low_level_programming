#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: head pointer of the linked list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *fr;
	int t_df;

	if (h == NULL || *h == NULL)
		return (0);

	temp = *h;

	while (temp != NULL)
	{
		t_df = temp - temp->next;

		if (t_df > 0)
		{
			fr = temp->next;
			free(fr);
			temp = fr;
			count++;
		}
		else
		{
			free(temp);
			fr = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
