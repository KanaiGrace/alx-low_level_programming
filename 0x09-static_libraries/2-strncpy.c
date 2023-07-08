#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: points to destination
 * @src: points to source
 * @n: number of characters to copy from string
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
