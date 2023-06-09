#include "hash_tables.h"

/**
 * hash_table_get - fn that retrieves value associated with a key in hash table
 * @ht: The hash table we are retriving the key from
 * @key: The key to retrive
 * by Lo
 * Return:value associated with the key || NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i; /*index initialized*/

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	/*iterates through the hash table*/
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
