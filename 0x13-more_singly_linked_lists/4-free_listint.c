#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head:pointer to listint_t
 */
void free_listint(listint_t *head)
{
listint_t *count;
while (head != NULL)
{
count = head;
head = head->next;
free(count);
}
}
