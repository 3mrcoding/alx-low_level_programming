#include "hash_tables.h"

/**
 * hash_table_t - function creates a hash table
 * @size: size of hash table
 * Return: pointer of hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	int i = 0;

	hash_table_t *ht = malloc(sizeof(hash_table_t));

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t) * size);

	for (i; i < size; i++)
		ht->array[i] = NULL;
}
