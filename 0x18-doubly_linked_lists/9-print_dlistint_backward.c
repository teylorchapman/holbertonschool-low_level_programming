#include "lists.h"

/**
* print_dlistint_backwards - prints all elements of dlistint_t
* backwards
* @h: pointer to the head of the list
* return: number of nodes
*/

size_t print_dlistint_backward(const dlistint_t *h)
{
int nodes = 0;

while (h)
{
if (h->next == NULL)
{
nodes++;
break;
}
nodes++;
h = h->next;
}
while (h)
{
printf("%d\n", h->n);
h = h->prev;
}
return (nodes);
}
