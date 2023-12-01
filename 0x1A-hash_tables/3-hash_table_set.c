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
	char *key_copy, *value_copy;
	unsigned long int hash_code;
	hash_node_t *new_node, *ptr;

	if (ht == NULL || key == NULL || *key == '\0' ||  strlen(key) == 0 || value == NULL)
		return (0);
	hash_code = key_index((const unsigned char *)key, ht->size);
	if (ht->array[hash_code] != NULL)
	{
		ptr = ht->array[hash_code];
		return (check_dup(&ptr, key, value));
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(new_node);
		return (0);
	}
	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(new_node);
		free(key_copy);
		return (0);
	}
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;
	ht->array[hash_code] = new_node;
	return (1);
}

/**
 *check_dup - check for duplicate element
 *@ptr: pointer to the first node in the list
 *@value: value
 *@key: key
 *Return: 1 or 0
 */
int check_dup(hash_node_t **ptr, const char *key, const char *value)
{
	hash_node_t *temp, *new_node;
	char *value_copy, *key_copy;

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	temp = *ptr;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_copy;
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(new_node);
		free(value_copy);
		return (0);
	}
	new_node->next = *ptr;
	new_node->key = key_copy;
	new_node->value = value_copy;
	*ptr = new_node;
	return (1);
}
