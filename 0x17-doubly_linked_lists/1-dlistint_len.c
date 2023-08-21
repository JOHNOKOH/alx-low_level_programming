#include "lists.h"

/**
 * dlistint_len - computes the number of nodes in a list
 * @h: pointer to head node of the list
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp;

	if (!h)
		return (counter);

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
