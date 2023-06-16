#include <stdio.h>

/**
 * main - prints hexadecimal
 *
 * Return: 0
 */
int main(void)
{
int b;

for (b = 0; b < 16; b++)
{
if (b < 10)
{
putchar(b + '0');
}
else
{
putchar(b - 10 + 'a');
}
}
putchar('\n');
return (0);
}
