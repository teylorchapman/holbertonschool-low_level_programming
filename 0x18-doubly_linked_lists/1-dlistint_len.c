#include "lists.h"

/**
* dlistint_len - counts the number of elements in a doubly linked list
* @h: the double linked list to count
* return: number of elements in the doubly linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
int length = 0;

while (h != NULL)
{
++length;
h = h->next;
}
return (length);
}
