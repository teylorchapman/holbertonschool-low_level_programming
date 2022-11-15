#include "lists.h"

/**
* get_dnodeint_at-index = gets a node from a
* a doubly linked list
* @head: the head of a doubly linked list
* @index: the index to find in the doubly linked list
* return: the specific node of the doubly linked list
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int iter_times = 0;

if (head)
{
while (current != NULL)
{
if (iter_times == index)
return (current);
current = current->next;
++iter_times;
}
}
return (NULL);
}
