#include "main.h"
#include <string.h>

/**
 * puts_half - print second half of string
 * @str: holds value
 * return: void
 */
void puts_half(char *str)
{
int length = strlen(str);
int i;
if ((length % 2 == 0) || ((length - 1) % 2 == 0))
{
for (i = length / 2; i < length; i++)
{
_putchar(str[i]);
}
}
}

