#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: holds value
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
