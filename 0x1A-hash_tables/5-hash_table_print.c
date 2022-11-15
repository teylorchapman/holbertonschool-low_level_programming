#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: the hash table to print
* return: void
*/

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i, flag = 0;
hash_node_t *current;

if (ht == NULL)
return;
putchar('{');
for (i = 0; i < ht->size; i++)
{
current = ht->array[i];
if (current != NULL)
{
while (current != NULL)
{
if (flag == 1)
{
printf(", ");
}
printf("'%s': '%s'", current->key, current->value);
flag = 1;
current = current->next;
}
}
}
putchar('}');
putchar('\n');
}
