#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees and sets head to null
 * @head:pointer to pointer
 */
void free_listint2(listint_t **head)
{
listint_t *count;
while (*head != NULL)
{
count = *head;
*head = (*head)->next;
free(count);
}
*head = NULL;
}
