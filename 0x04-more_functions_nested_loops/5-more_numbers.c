#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: 0
 */
void more_numbers(void)
{
int j;

int i;
for (i = 0; i < 9; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
putchar('\n');
}
}
