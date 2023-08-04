#include "main.h"

/**
 * flip_bits - counts the number of bits to change/flipped
 * to get from one number to another
 * @n: first unsigned long integer variable
 * @m: second unsigned long integer variable
 *
 * Return: number of bits to change/flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = xor >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
