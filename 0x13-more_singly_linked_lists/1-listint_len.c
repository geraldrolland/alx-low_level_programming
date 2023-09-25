#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *listint_len - printf the number of node in a list
 *@h: pointer to head node
 *Return: size
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
