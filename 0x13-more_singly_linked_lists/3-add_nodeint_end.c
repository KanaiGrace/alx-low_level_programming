#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node at end of list
 * @head:pointer to pointer
 * @n:new value for node
 * Return:new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *count;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
count = head;
while (count->next != NULL)
{
count = count->next;
}
count->next = new;
}
return (new);
}
