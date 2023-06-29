#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: points to destination
 * @src: points to source
 * @n: number of characters to get from src
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
