#include "main.h"

/**
 * get_bit - returns value of an int at a given point
 * @n:binary
 * @index:position of nit to be extracted
 * Return:bit extracted
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
if (index > 63)
return (-1);
bit = (n >> index) & 1;
return (bit);
}
