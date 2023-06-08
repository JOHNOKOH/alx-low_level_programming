#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: destination memory area where n bytes is stored.
 * @src: sourced memory area where n bytes is copied.
 * @n: number of bytes.
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (; j < k; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
