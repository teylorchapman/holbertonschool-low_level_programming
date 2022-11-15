#include "hash_tables.h"

/**
* hash_tables_create - creates a hash table
* @size: size of the array
* return: a pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *htable = NULL;
hash_node_t **arr = NULL;

htable = malloc(sizeof(hash_table_t));
if (htable == NULL)
return (NULL);

arr = malloc(sizeof(hash_node_t *) * size);
if (arr == NULL)
return (NULL);

for (; i < size; i++)
arr[i] = NULL;

htable->size = size;
htable->array = arr;

return (htable);
}
