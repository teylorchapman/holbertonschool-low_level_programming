#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 * Return: the address of the node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nn = NULL;
listint_t *pn = NULL;
unsigned int i = 0;

nn = malloc(sizeof(listint_t));
if (nn == NULL || idx > listint_len(*head))
{
free(nn);
return (NULL);
}
nn->n = n;
nn->next = NULL;
while (head != NULL)
{
if (i == idx)
{
if (i == 0)
{
nn->next = *head;
*head = nn;
return (nn);
}
nn->next = pn->next;
pn->next = nn;
return (nn);
}
else if ((i + 1) == idx)
pn = *head;
head = ((*head)->next);
i++;
}
return (NULL);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: of the list
 * Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
count += 1;
cursor = cursor->next;
}
return (count);
}
