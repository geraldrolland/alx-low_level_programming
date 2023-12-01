#include "hash_tables.h"

/**
 *hash_djb2 - return a hash code for mapping
 *@str: key for mapping
 *Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
