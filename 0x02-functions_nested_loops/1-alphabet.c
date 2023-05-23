#include "main.h"
/**
 * main - prints the alphabets, in the lowercase, follwed by a new line.
 */
void print_alphabet(void);
{
	char letter;

	while (letter = 'a' && letter <= 'z')
	{
		_putchar(letter);
		letter++
	}
	_putchar('\n');
	return (0);
}
