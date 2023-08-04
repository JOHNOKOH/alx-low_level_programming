#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints character to stdout.
 * @c: character to print.
 *
 * Return: Always 1 on success
 * On error, set errno respectively.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
