#include "main.h"
/**
 * _isupper - checks for uppercase characters.
 *
 * @c: character to print.
 * Return: 1 if c is upppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
