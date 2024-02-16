#include "hash_tables.h"
/**
 *hash_table_set - adds an element to a hash table
 *@ht: pointer to hash
 *@key: pointer to key
 *@value: value to add
 *Return: 1 if is success otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long index, size;
hash_node_t *new;

if (ht  == NULL || key == NULL || value == NULL)
return (0);

size = ht->size;
index = key_index((const unsigned char *)key, size);

if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
{
ht->array[index]->value = strdup(value);
return (1);
}

new = malloc(sizeof(hash_node_t));

if (new == NULL)
return (0);

new->key = strdup(key);
new->value = strdup(value);
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
