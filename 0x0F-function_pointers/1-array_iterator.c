#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - iterates over an array
 *@array:points to an array
 *@size:size of array
 *@action:pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
i = 0;
while (i < size)
{
(*action)(array[i]);
i++;
}
}
