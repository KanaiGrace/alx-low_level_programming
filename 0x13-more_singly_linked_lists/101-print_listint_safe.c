#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a linked list
 * @head:pointer
 * Return:x
 */
size_t print_listint_safe(const listint_t *head)
{
size_t x = 0;
const listint_t *bloop, *floop;
bloop = head;
floop = head;
printf("[%p] %d\n", (void *)bloop, bloop->n);
x++;
while (floop != NULL && floop->next != NULL)
{
bloop = bloop->next;
floop = floop->next->next;
printf("[%p] %d\n", (void *)bloop, bloop->n);
x++;
if (bloop == floop)
{
printf("-> [%p] %d\n", (void *)floop->next, floop->next->n);
break;
}
}
while (bloop != NULL)
{
printf("[%p] %d\n", (void *)bloop, bloop->n);
bloop = bloop->next;
x++;
}
return (x);
}
