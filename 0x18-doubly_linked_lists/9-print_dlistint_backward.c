#include "lists.h"

/**
* print_dlistint_backwards - prints all elements of dlistint_t
* backwards
* @h: pointer to the head of the list
* return: number of nodes
*/

size_t print_dlistint_backward(const dlistint_t *h)
{
size_t nodes = 0;

if (!h)
return (0);
while (h->next)
h = h->next;
while (h)
{
printf("%d\n", h->n);
h = h->prev;
nodes++;
}
return (nodes);
}
