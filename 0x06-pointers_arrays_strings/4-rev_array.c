#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses array elements
 * @a: points to array
 * @n: length of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
    int i, temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

