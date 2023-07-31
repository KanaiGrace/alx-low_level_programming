#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in lonked list
 * @h:pointer to linked list
 * Return:number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t x;
const listint_t *count;
x = 0;
count = h;
while (count != NULL)
{
count = count->next;
x++;
}
return (x);
}
