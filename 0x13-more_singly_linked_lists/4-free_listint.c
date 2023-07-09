#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the linked list listint_t
 * @head: listint_t head to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
