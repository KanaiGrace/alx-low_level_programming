#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numebrs
 *@n :value
 *
 * Return: void
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (n = 0; n < 98; n++)
{
printf("%d, ", n);
}
}
else
{
for (n = 0; n > 98; n--)
{
printf("%d, ", n);
}
}
printf("%d\n", n);
}


