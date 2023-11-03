#include "hash_tables.h"

/**
 * hash_table_t - function creates a hash table
 * @size: size of hash table
 * Return: pointer of hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
	{
		free(ht->array);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
