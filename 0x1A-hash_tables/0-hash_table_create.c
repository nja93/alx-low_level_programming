#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size:size of the array
  * Return: new hash table on success else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_new;
	unsigned long int l;


	hash_table_new = malloc(sizeof(hash_table_t));

	if (hash_table_new == NULL)
		return (NULL);

	hash_table_new->size = size;
	hash_table_new->array = malloc(sizeof(hash_table_t *) * size);


	if (hash_table_new->array == NULL)
	return (NULL);

	for (l = 0; l < size; l++)
	{
		hash_table_new->array[l] = NULL;
	}
	return (hash_table_new);
}

