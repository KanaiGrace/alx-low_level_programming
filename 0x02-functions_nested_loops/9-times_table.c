#include "main.h"
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
printf("%2d", result);
if (b != 9)
{
printf(",");
}
}
printf("\n");
}
}
