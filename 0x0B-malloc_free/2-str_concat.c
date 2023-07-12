#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1:holds first string
 * @s2:holds the second string
 * Return:pointer
 */
char *str_concat(char *s1, char *s2)
{
char *z;
int length, length1, count, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[length] != '\0')
{
length++;
}
while (s2[length1] != '\0')
{
length1++;
}
z = malloc(sizeof(char) * (length + length1 + 1));
if (z == NULL)
{
return (NULL);
}
j = 0;
count = 0;
while (count < (length + length1))
{
if (count <= length)
{
z[count] = s1[count];
}
if (count >= length)
{
z[count] = s2[j];
j++;
}
count++;
}
z[count] = '\0';
return (z);
}
