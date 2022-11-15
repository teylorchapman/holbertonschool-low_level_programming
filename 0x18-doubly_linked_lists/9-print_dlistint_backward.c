#include "lists.h"

/**
* print_dlistint_backwards - prints all elements
* of dlistint_t backwards
* @h: points to the head of the list
* Return: number of nodes
*/

size_t print_dlistint_backward(const dlistint_t *h)
{
int node = 0;

while (h)
{
if (h->next == NULL)
{
node++;
break;
}
node++;
h = h->next;
}
while (h)
{
printf("%d\n", h->n);
h = h->prev;
}
return (node);
}
