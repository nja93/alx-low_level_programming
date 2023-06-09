#include "hash_tables.h"

/**
 * hash_table_set - fn that adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: CANNOT BE an empty string)
 * @value: value associated with the key
 * value must be duplicated. value can be an empty string
 * by Lorna
 * Return: 1 if successful otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	unsigned long int x, index;
	char *new_value;

	if (!ht || !key || !value)
	return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = new_value;
			return (1);
		}
	}
	/* not "node" the, use correct terminomologies*/
	newnode  = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(new_value);
		return (0);
	}
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = new_value;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
