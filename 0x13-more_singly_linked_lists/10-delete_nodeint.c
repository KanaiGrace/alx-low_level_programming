#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete nodes at index
 * @head:pointer to pointer
 * @index:index of node to be deleted
 * Return:1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *count;
listint_t *delete;
unsigned int watch = 0;
if (*head == NULL)
return (-1);
count = *head;
if (index == 0)
{
*head = (*head)->next;
free(count);
return (1);
}
while (count != NULL)
{
if (watch + 1 == index)
{
delete = count->next;
if (delete == NULL)
return (-1);
count->next = delete->next;
free(delete);
return (1);
}
count = count->next;
watch++;
}
return (-1);
}
