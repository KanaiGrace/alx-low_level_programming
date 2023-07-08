#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: points to the address
 *
 * Return: 0
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int digit;
int started = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
{
started = 1;
digit = *s - '0';
if (sign == -1)
digit *= -1;
result = result * 10 + digit;
}
else if (started)
{
break;
}
s++;
}
return (result);
}
