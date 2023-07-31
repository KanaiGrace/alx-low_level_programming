#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head:pointer to listint_t
 * Return:sum or 0
 */
int sum_listint(listint_t *head)
{
listint_t *count;
int sum = 0;
count = head;
if (head == NULL)
return (0);
while (count != NULL)
{
sum += count->n;
count = count->next;
}
return (sum);
}
