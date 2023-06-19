#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the progam.
 * @argc: number of arguments
 * @argv: array of argument.
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
