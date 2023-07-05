#include "main.h"

/**
 * factorial - print factorial of numbers
 * @n: holds value
 * Return: -1
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
