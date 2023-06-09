#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: Points to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *current_node, *temp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			current_node = ht->array[x];
			while (current_node != NULL)
			{
				temp = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				node = temp;
			}
		}
	}}
