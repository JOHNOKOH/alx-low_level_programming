#include "lists.h"

/**
 * print_listint - prints the elements of a listint_t
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (!h->n)
		printf("%d\n", h->n);
		num++;

		h = h->next;
	}
	return (num);
}
