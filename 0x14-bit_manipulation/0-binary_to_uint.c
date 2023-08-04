#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b:pointer to string passed
 * Return:converted number
 */
unsigned int binary_to_uint(const char *b)
{
int length = 0;
int x;
int result = 0;
if (b == NULL)
return (0);
while (b[length] != '\0')
{
if (b[length] != '0' && b[length] != '1')
return (0);
length++;
}
for (x = 0; x < length; x++)
{
result = (result << 1) + (b[x] - '0');
}
return (result);
}
