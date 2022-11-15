#include "hash_tables.h"
#include <string.h>

/**
* hash_table_set - adds an element to the hash table
* @ht: the hash table to add or update the key/value to
* @key: the key of a value
* @value: the value associated with the key
* return: 1 if successful, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx = 0;
hash_node_t *elem = NULL, *new_node = NULL;

if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
return (0);

idx = key_index((unsigned char *) key, ht->size);
elem = ht->array[idx];

if (elem && strcmp(key, elem->key) == 0)
{
free(elem->value);
elem->value = strdup(value);
return (1);
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[idx];
ht->array[idx] = new_node;
return (1);
}
