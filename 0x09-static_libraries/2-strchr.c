#include "main.h"
#include <string.h>

/**
 * _strchr - returns pointer to first occurence of letter in a string
 * @s: holds adress of string
 * @c: character to be found
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
return (strchr(s, c));
}
