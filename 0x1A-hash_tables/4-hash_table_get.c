#include "hash_tables.h"

/**
 *hash_table_get - get the value at a specified key
 *@ht: hash table
 *@key: key
 *Return: value on success
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_code;
	hash_node_t *ptr;

	if (strlen(key) == 0 || *key == '\0' || key == NULL)
		return (NULL);
	hash_code = key_index((const unsigned char *)key, ht->size);
	if (hash_code >= ht->size)
		return (NULL);
	ptr = ht->array[hash_code];
	if (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
				return (ptr->value);
			ptr = ptr->next;
		}
		return (NULL);
	}
	return (NULL);
}
