#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: the hash table to print
* return: nothing
*/

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node = NULL;
unsigned long int i = 0;
short pr_commas = 0;

if (ht == NULL)
return;

printf("{");

for (; i < ht->size; i++)
{
node = ht->array[i];

while (node)
{
if (pr_commas == 1)
printf(" , ");

pr_commas = 1;
printf("'%s' : '%s'", (char *) node->key, (char *) node->value);
node = node->next;
}
}
printf("}\n");
}
