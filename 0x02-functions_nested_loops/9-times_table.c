#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * times_table - print timestable
 *
 * Return: 0
 */
void times_table(void)
{
int a, b, result;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
result = a * b;
printf("%d", result);
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
