#include <stdio.h>
#include "lists.h"
/**
*print_list - prints all the elements of a list_t list.
*@h: pointer to a constant string
*Return: count or NULL
*/

size_t print_list(const list_t *h)
{
	size_t count;
	int i;

	i = 0;
	count = 0;
	while (1)
	{
	if (h == NULL)
	{
		return (count);
	}
	count++;
	if (h->str == NULL)
	{
	printf("[0] (nil)");
	printf("\n");
	}
	printf("[%u] %s", h->len, h->str);
	printf("\n");
	h = h->next;
	i++;
	}
	return (count);
}
