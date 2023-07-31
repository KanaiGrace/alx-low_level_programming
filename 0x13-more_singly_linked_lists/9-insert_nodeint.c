#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts anew node at a given posiition
 * @head:pointer to pointer
 * @idx:index of where it should be added
 * @n:value ot be added
 * Return:null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *crnt;
unsigned int watch;
watch = 0;
new =  malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
crnt = *head;
while (crnt != NULL && watch < idx - 1)
{
crnt = crnt->next;
watch++;
}
if (crnt == NULL)
{
return (NULL);
}
new->next = crnt->next;
crnt->next = new;
return (new);
}
