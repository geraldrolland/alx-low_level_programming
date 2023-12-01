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
	unsigned long int hash_code;
	hash_node_t *new_node;
	hash_node_t *ptr;

	if (key == NULL || strlen(key) == 0)
		return (0);
	key_copy = strdup(key);
	value_copy = strdup(value);
	hash_code = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	if (key_copy == NULL || value_copy == NULL)
		return (0);
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;
	if (ht->array[hash_code] != NULL)
	{
		ptr = ht->array[hash_code];
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
		return (1);
	}
	ht->array[hash_code] = new_node;
	return (1);

}
