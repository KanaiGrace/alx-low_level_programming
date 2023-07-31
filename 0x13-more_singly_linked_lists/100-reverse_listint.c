#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *bef;
listint_t *aft;
bef = NULL;
aft = NULL;
while (*head)
{
aft = (*head)->next;
(*head)->next = bef;
bef = *head;
*head = aft;
}
*head = bef;
return (*head);
}
