#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: holds value
 * @b: holds value
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
