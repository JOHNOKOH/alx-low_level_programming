#include "main.h"

/**
 * clear_bit - function sets the value of a given bit to 0 at a given index.
 * @n: pointer to the to the unsigned integer to change
 * @index: index of the bit to clear starting from 0
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
