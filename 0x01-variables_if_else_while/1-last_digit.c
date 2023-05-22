#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  print the last digit of the number stored in the variable n
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last);
	}
	else if (n < 6) && (n != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
