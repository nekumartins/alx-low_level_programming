#include "hash_tables.h"
/**
*hash_table_get - retrieves a value associated with a key
*@ht: hash table
*@key: key to search
*Return: value based on the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *nnode;
unsigned long int index;

if (key == NULL || ht == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
nnode = ht->array[index];

for (; nnode != NULL; nnode = nnode->next)
{
if (strcmp(nnode->key, key) == 0)
return (nnode->value);
}
return (NULL);
}
