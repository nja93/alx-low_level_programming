#include "hash_tables.h"
/**
 * key_index - function that return the index of a key.
 * @key:  key
 * by Lorna
 * @size: size of the array of the hash table
 * Return: index @ which the key/value pair is stored in the array the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = hash_djb2(key);
	unsigned long int index = hash_code % size;

	return (index);
}
