#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints characters
 * @str: holds value
 * return: 0
 */
void puts2(char *str)
{
int length = strlen(str);
int i;

for (i = 0; i < length; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
