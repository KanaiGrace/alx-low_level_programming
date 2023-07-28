#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - returns number of elements in linked list
 * @h:pointer to linked list
 * Return:number of nodes
 */
size_t list_len(const list_t *h)
{
size_t b;
b = 0;
while (h)
{
h = h->next;
b++;
}
return (b);
}
