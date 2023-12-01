#include "hash_tables.h"

/**
 *key_index - return the index of the key for mapping
 *@key: key
 *@size: size of the table
 *Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	index %= size;
	return (index);
}
