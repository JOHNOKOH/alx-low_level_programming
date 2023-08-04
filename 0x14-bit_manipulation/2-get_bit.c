#include "main.h"

/**
 * get_bit - returns value of a bit at an index of a decimal number
 * @n: number to search
 * @index: index of the bit starting from 0.
 * Return: value of the bit or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
