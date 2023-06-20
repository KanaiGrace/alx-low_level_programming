#include "main.h"

/**
 * times_table - print timestable
 *
 * Return: void
 */
void times_table(void)
{
int a, b, result;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
result = a * b;
_putchar(result + '0');
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
