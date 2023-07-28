#include <stdio.h>
#include "lists.h"
/**
*print_list - prints all the elements of a list_t list.
*@h: pointer to a constant string
*Return: count or NULL
*/

size_t print_list(const list_t *h)
{
	/*size_t count;

	count = 0;
	while (h)
	{
	if (!h->str)
	{
	printf("[0] (nil)");
	printf("\n");
	}
	printf("[%u] %s", h->len, h->str);
	printf("\n");
	h = h->next;
	count++;
	}
	return (count);*/
	size_t count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}