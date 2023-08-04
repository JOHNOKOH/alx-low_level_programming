#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted num or 0 if b is null
 * or there is one or more chars in the string b which is not 0 or 1. return 0.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0, i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[i] - '0');
	}
	return (decimal_val);
}
