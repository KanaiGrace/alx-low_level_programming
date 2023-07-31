#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h:pointer to listint_t
 * Return:x
 */
size_t print_listint(const listint_t *h)
{
size_t x;
const struct listint_s *count;
x = 0;
count = h;
while (count != NULL)
{
printf("%d\n", count->n);
count = count->next;
x++;
}
return (x);
}
