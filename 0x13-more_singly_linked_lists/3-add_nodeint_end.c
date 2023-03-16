#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 * Return: address of the newly added node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nn;
listint_t *cursor = *head;

nn = malloc(sizeof(listint_t));
if (nn != NULL)
{
nn->n = n;
nn->next = NULL;
}
else
return (NULL);

if (cursor != NULL)
{
while (cursor->next != NULL)
cursor = cursor->next;
cursor->next = nn;
}
else
*head = nn;
return (nn);
}
