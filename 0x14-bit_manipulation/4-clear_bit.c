#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n:pointer to the binary
 * @index:position of bit to be changed
 * Return:1 or 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
