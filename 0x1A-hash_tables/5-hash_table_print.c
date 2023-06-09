#include "hash_tables.h"

/**
 * hash_table_print -function that prints entire hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	int start = 1;

	/* if hash table is blank, dont print anything */
	if (ht == NULL)
	{
		return;
	}

	printf("{");

	/* Check if ht is NULL */
	if (ht != NULL)
	{
		/* Iterate through indexes in array */
		for (x = 0; x < ht->size; x++)
		{
			/* Iterate through nodes */
			while (ht->array[x] != NULL)
			{
				if (start == 0)
					printf(", ");
				printf("\'%s\': \'%s\'", ht->array[x]->key, ht->array[x]->value);
				start = 0;
				ht->array[x] = ht->array[x]->next;
			}
		}
	}


	printf("}\n"); /*do nothing if true*/
}

