#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a linked list.
 * @head: pointer to the first node in the list.
 * @n: data to insert in new node.
 *
 * Return: pointer to the new node, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_new;

	_new = malloc(sizeof(listint_t));
	if (!_new)
		return (NULL);

	_new->n = n;
	_new->next = *head;
	*head = _new;

	return (_new);
}
