#include "hash_tables.h"

/**
* key_index - computes the index of a given key
* in a hash table
* @key: the given key
* @size: the size of the hash table
* return: the index of a key in a hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
