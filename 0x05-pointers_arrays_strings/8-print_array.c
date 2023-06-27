#include "main.h"

/**
 * print_array - prints an array
 * @a: holds value
 * @n: holds value
 * return: 0
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (a[i] != -1024)
{
printf(", ");
}
else
{
continue;
}
}
printf("\n");
}
