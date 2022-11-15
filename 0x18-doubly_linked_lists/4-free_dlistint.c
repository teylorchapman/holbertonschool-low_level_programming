#include "lists.h"

/**
* free_dlistint - free a doubly linked list
* @head: the head of the doubly linked list
* return: nothing
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head, *next = NULL;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
