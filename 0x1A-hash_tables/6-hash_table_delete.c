#include "hash_tables.h"

/**
* hash_table_delete - deletes the hash table
* @ht: hash table
* return: void
*/

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *current;

for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
while (ht->array[i] != NULL)
{
current = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht->array[i] = current;
}
}
}
free(ht->array);
free(ht);
}
