#include "main.h"

/**
 * flip_bits - returns number needed to flip to get from one num to another
 * @n:first value
 * @m:second value
 * Return:number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
int cnt = 0;
unsigned long int crnt;
unsigned long int exc = n ^ m;
for (i = 63; i >= 0; i--)
{
crnt = exc >> i;
if (crnt & 1)
cnt++;
}
return (cnt);
}
