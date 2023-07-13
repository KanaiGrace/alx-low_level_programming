#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings
 * @s1:holds string
 * @s2:holds string
 * @n:size
 * Return:pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *z;
unsigned int len1 = 0, len2 = 0, totalen, i = 0, j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (len2 < n)
{
totalen = len1 + n;
z = malloc(sizeof(char) * (totalen + 1));
if (z == NULL)
return (NULL);
for (i = 0; i < len1; i++)
z[i] = s1[i];
for (j = 0; j < len2; j++)
z[i + j] = s2[j];
z[i + j] = '\0';
}
else
{
totalen = len1 + len2;
z = malloc(sizeof(char) * (len1 + len2 + 1));
if (z == NULL)
return (NULL);
for (i = 0; i < len1; i++)
z[i] = s1[i];
for (j = 0; j < n; j++)
z[i + j] = s2[j];
z[i + j] = '\0';
}
return (z);
}

