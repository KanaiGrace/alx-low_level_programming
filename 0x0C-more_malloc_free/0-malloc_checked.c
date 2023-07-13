#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b:size
 * Return:pointer
 */
void *malloc_checked(unsigned int b)
{
int  *p;
p = malloc(sizeof(int) * b);
if (p == NULL)
{
exit(98);
}
return (p);
}
