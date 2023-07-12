#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size:holds size of array
 * @c:initial letter
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *z;
if (size == 0)
{
return (NULL);
}
z = malloc(sizeof(char) * size);
if (z == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
z[i] = c;
}
return (z);
}
