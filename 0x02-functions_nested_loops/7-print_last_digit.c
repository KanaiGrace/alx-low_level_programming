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
_putchar(lastdigit + '0');
return (lastdigit);
}
