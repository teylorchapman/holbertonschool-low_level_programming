#include "lists.h"


/**
* print_dlistint - prints all the elements of the dlistint_t list
* @h: the head of the dlistint_t list
* return: the number of nodes in the list
*/


size_t print_dlistint(const dlistint_t *h)
{
int length = 0;

while (h != NULL)
{
printf("%d\n", h->n);
++length;
h = h->next;
}
return (length);
}
