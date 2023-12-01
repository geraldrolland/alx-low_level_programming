#include "hash_tables.h"


/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL, *temp = NULL;

	if (ht != NULL && ht->array != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (ht->array[i]->next != NULL)
				{
					ptr = ht->array[i];
					while (ptr->next != NULL)
					{
						temp = ptr;
						ptr = ptr->next;
						free(temp->value);
						free(temp->key);
						free(temp);
					}
					free(ptr->value);
					free(ptr->key);
					free(ptr);
					continue;
				}
				free(ht->array[i]->value);
				free(ht->array[i]->key);
				free(ht->array[i]);
			}
			continue;
		}
		free(ht->array);
		free(ht);
	}
}

