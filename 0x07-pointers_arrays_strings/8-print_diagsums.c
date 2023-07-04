#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix stored as a 1D array
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
printf("%d\n", sum1);
printf("%d\n", sum2);
}
