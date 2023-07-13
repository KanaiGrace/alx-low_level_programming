#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc-allocates memory for array using malloc
 *@nmemb:holds value
 *@size:holds value
 *Return:pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *z;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
z = malloc(nmemb * size);
if (z == NULL)
{
return (NULL);
}
memset(z, 0, nmemb * size);
return (z);
}

