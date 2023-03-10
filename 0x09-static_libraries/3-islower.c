#include"main.h"
/**
 *_islower - that function function print  1 if lower 0 if not
 *
 *@n: 1 (lowercase) 0 (uppercase)
 *Return: 0
 */

int _islower(int n)
{
if (isupper(n))
{
putchar(0 + '0');
return (0);
}
else
{
putchar(1 + '0');
return (1);
}
}
