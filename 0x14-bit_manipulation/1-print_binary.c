#include "main.h"

/**
 * print_binary - converts int to binary
 * @n: holds value passed (unsigned long int)
 */
void print_binary(unsigned long int n)
{
int i, bt = 0;
unsigned long int msk = 1UL << 63;
for (i = 63; i >= 0; i--)
{
if (n & msk)
{
_putchar('1');
bt = 1;
}
else if (bt || i == 0)
{
_putchar('0');
}
n <<= 1;
}
}
