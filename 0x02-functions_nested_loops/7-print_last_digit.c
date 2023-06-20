#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: holds value
 *
 * Return: 0
 */
int print_last_digit(int n)
{
int lastdigit = n % 10;
if (lastdigit < 0)
{
lastdigit = lastdigit * -1;
}
_putchar(lastdigit + '0');
return (lastdigit);
}
