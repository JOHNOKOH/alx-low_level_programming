#include <unistd.h>
#include <string.h>
/**
 * main - Print followed by new line to standard error
 * Return 1 (Error)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, strlen(str));
	return (1);
}
