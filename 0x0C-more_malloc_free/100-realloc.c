#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *  _realloc - reallocates a memory block
 * @ptr:pointer to previous memory
 * @old_size:size in bytes of space allocated for ptr
 * @new_size:new size in memory block
 * return:pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *z;
unsigned int copy_size;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
z = malloc(new_size);
if (z == NULL)
{
return (NULL);
}
copy_size = new_size;
if (new_size < copy_size)
{
copy_size = new_size;
}
memcpy(z, ptr, copy_size);
free(ptr);
return (z);
}
