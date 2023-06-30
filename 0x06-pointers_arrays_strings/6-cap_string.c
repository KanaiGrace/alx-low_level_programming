#include "main.h"
#include <ctype.h>
#include <stdbool.h>

/**
 * cap_string - capitalize all words in a string
 * @str: pointer to string
 *
 * Return: pointer to modified string
 */
char *cap_string(char *str)
{
bool new_word = true;
char *ptr = str;
while (*ptr != '\0')
{
if (isspace(*ptr) || ispunct(*ptr))
{
new_word = true;
}
else if (new_word)
{
*ptr = toupper(*ptr);
new_word = false;
}
else
{
*ptr = tolower(*ptr);
}
ptr++;
}
return (str);
}
