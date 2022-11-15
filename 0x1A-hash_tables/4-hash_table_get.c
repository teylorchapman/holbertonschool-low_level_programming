#include "hash_tables.h"
#include <string.h>

/**
* hash_table_get - retrieves a value associated with a key
* @ht: the hash table to look into
* @key: the key to finding
* return: the value associated with the element or NULL
* if the key can't be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx = 0;
hash_node_t *elem = NULL;

if (ht == NULL || key == NULL)
return (NULL);

idx = key_index((unsigned char *) key, ht->size);
elem = ht->array[idx];

if (elem == NULL)
return (NULL);

while (strcmp(key, elem->key) != 0)
elem = elem->next;

return (elem->value);
}
