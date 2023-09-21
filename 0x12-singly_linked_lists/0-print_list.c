#include <stdio.h>
#include "lists.h"
/**
 *print_list - print the element in a list
 *@h: pointer to the first node
 *Return: count on success
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			ptr = ptr->next;
		}
		count++;
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
