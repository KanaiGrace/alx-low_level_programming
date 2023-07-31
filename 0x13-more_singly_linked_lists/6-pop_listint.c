#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of a list and returns nodes data
 * @head:pointer to pointer
 * Return:head nodes data or 0
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *count;
count = *head;
data = count->n;
*head = (*head)->next;
free(count);
return (data);
}


