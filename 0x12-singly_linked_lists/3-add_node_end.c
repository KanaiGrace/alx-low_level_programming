#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node to end of linked list
 * @head:double pointer to list_t
 * @str:string to put in new node
 * Return:adress of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *one;
list_t *tem = *head;
unsigned int len = 0;
while (str[len])
len++;
one = malloc(sizeof(list_t));
if (one == NULL)
return (NULL);
one->str = strdup(str);
one->len = len;
one->next = NULL;
if (*head == NULL)
{
*head = one;
return (one);
}
while (tem->next)
tem = tem->next;
tem->next = one;
return (one);
}

