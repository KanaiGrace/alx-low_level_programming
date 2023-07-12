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
int i = 0, j = 0, k = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
{
i++;
}
while (s2[j])
{
j++;
}
z = malloc(sizeof(char) * (i + j + 1));
if (z == NULL)
{
return (NULL);
}
while (k < (i + j))
{
if (k <= i)
z[k] = s1[k];
if (k >= i)
{
z[k] = s2[j];
j++;
}
k++;
}
z[k] = '\0';
return (z);
}
