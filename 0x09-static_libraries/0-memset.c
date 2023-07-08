#include "main.h"
#include <string.h>

/**
 * _memset - fills
 * @s: pointer to memory area
 * @b: constant byte to be used to replace
 * @n: number of bytes to be filled
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
