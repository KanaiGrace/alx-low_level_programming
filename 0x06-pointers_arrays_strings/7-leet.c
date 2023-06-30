#include "main.h"

/**
 * leet - encodes
 * @s: input
 *
 * Return: pointer
 */
char *leet(char *s)
{
char *ptr = s;
char leetChars[] = {'4', '3', '0', '7', '1'};
char letters[] = {'a', 'e', 'o', 't', 'l'};
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == letters[j] || s[i] == letters[j] - 'a' + 'A')
{
*ptr = leetChars[j];
break;
}
}
ptr++;
}
return (s);
}
