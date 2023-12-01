#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: pointer to the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *ptr = NULL;
	int flag = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (flag == 1 && i != ht->size - 1)
					printf(", ");
				if (ht->array[i]->next != NULL)
				{
				ptr = ht->array[i];
				while (ptr != NULL)
				{
					printf("'%s': '%s'", ptr->key, ptr->value);
					if (ptr->next != NULL)
					{
						printf(", ");
					}
					ptr = ptr->next;
				}
				continue;
				}
				flag = 1;
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			}
			continue;
		}
		printf("}\n");
	}
}
