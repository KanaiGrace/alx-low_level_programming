#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns value of x raised to y
 * @x: holds base
 * @y: holds exponent
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
