#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h:pointer to listint_t
 * Return:x
 */
size_t print_listint(const listint_t *h)
{
size_t x = 0;
while (h)
{
printf("%d\n", h->n);
x++;
h = h->next;
}
return (x);
}
