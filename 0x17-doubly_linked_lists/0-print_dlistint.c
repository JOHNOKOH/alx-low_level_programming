#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: pointer to the
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp;

	if (!h)
		return (counter);
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
