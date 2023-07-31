#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of list
 * @head:pointer to list
 * @n:new value for node
 * Return:pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
printf("Memory allocation failed\n");
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}

