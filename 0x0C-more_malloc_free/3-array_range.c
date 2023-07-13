#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range-creates array of integers
 *@min:min value
 *@max:max value
 *Return:pointer
 */
int *array_range(int min, int max)
{
int *z;
int i;
if (min > max)
{
return (NULL);
}
z = malloc(sizeof(int) * (max - min + 1));
if (z == NULL)
{
return (NULL);
}
for (i = 0; i <= (max - min); i++)
{
z[i] = min + i;
}
return (z);
}
