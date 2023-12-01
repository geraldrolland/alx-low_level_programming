#include "hash_tables.h"

/**
 * hash_table_set - insert an element in the hash table
 * @key: key
 * @value: value
 * @ht: hash table
 * Return: 1 on success or 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *key_copy;
	char *value_copy;
	unsigned long int hash_code, i;
	hash_node_t *new_node;
	hash_node_t *ptr;

	if (key == NULL || strlen(key) == 0 || value == NULL || ht == NULL)
		return (0);
	hash_code = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	key_copy = strdup(key);
	value_copy = strdup(value);
	if (key_copy == NULL || value_copy == NULL)
		return (0);
	if (ht->array[hash_code] != NULL)
	{
		ptr = ht->array[hash_code];
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key_copy) == 0)
			{
				free(ptr->value);
				free(key_copy);
				ptr->value = value_copy;
				return (1);
			}
			ptr = ptr->next;
		}
		ptr = ht->array[hash_code];
		new_node->next = ptr;
		new_node->key = key_copy;
		new_node->value = value_copy;
		ht->array[hash_code] = new_node;
		return (1);
	}
	ht->array[hash_code] = new_node;
	return (1);

}
