#include "main.h"

/**
 * print_binary - converts int to binary
 * @n:holds value passed
 */
void print_binary(unsigned long int n)
{
int i, cnt = 0;
unsigned int curnt;
for (i = 63; i >= 0; i--)
{
curnt = n >> i;
if (curnt & 1)
{
_putchar('1');
cnt++;
}
else if (cnt)
{
_putchar('0');
}
if (!cnt)
_putchar('0');
}
}
