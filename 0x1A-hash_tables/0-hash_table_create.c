#include "hash_tables.h"

/**
 * hash_table_create - Thsi function create a hash table
 * @size: size of the hash table
 * Return: my_table on success or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (my_table == NULL)
		return (NULL);
	my_table->size = size;
	my_table->array = malloc(sizeof(hash_node_t *) * size);
	if (my_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		my_table->array[i] = NULL;
	return (my_table);
}
