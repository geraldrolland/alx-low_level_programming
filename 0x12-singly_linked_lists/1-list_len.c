#include <stdlib.h>
#include "lists.h"
/**
 *list_len - returns the lenght of a list
 *@h: pointer to the first node
 *Return: count on success
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
