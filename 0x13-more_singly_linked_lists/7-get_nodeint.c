#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - retuns nth node of a list
 * @head:pointer to list
 * @index:index of the node
 * Return:nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *count;
unsigned int watch;
count = head;
watch = 0;
while (count != NULL)
{
if (watch == index)
{
return (count);
}
watch++;
count = count->next;
}
return (NULL);
}
