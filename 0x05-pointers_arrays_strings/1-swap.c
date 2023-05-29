#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *
 * @a: First integer
 * @b: Second integer
 * Return: Always 0. (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
