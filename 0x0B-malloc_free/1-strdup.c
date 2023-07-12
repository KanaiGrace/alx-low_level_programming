#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: pointer to string
 * Return: pointer
 */
char *_strdup(char *str)
{
int length;
char *z;
int count;
if (str == NULL)
{
return (NULL);
}
length = 0;
while (str[length] != '\0')
{
length++;
}
z = malloc((sizeof(char) * length) +1);
if (z == NULL)
{
return (NULL);
}
for (count = 0; str[count] != '\0'; count++)
{
z[count] = str[count];
}
return (z);
}

