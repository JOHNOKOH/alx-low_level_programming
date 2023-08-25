#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to block of memory to filled with string of character values.
 * @b: the value to be set.
 * @n: the number of bytes to be set to the value b.
 * Return: returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
