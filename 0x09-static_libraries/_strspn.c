#include "main.h"
#include <string.h>

/**
 * _strspn - returns number of bytes in initial segment
 * @s: pointer to intial segment
 * @accept: pointer to accept
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
