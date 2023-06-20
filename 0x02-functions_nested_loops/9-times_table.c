#include "main.h"

/**
 * times_table - print timestable
 *
 * Return: void
 */
void times_table(void)
{
int a, b, c, d, e, f, g, h, i, j;

for (a = 0; a < 9; a++)
{
for (b = 0; b <= 9; b++)
{
for (c = 0; c <= 18; c += 2)
{
for (d = 0; d <= 27; d += 3)
{
for (e = 0; e <= 36; e += 4)
{
for (f = 0; f <= 45; f += 5)
{
for (g = 0; g <= 54; g += 6)
{
for (h = 0; h <= 63; h += 7)
{
for (i = 0; i <= 72; i += 8)
{
for (j = 0; j <= 81; j += 9)
{
_putchar(a);
_putchar(b);
_putchar(c);
_putchar(d);
_putchar(e);
_putchar(f);
_putchar(g);
_putchar(h);
_putchar(i);
_putchar(j);
}
}
}
}
}
}
}
}
}
}
}

