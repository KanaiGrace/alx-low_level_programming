#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints reverse of a string
 * @s: holds value
 * return : void
 */
void print_rev(char *s)
{
int word = 0;
int o;
while (*s != '\0')
{
word++;
s++;
}
s--;
for (o = word; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
