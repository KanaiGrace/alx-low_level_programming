#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes lowercase to uppercase
 * @str: pointer
 *
 * Return: pointer to to upper
 */
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
*ptr = toupper(*ptr);
ptr++;
}
return (str);
}
