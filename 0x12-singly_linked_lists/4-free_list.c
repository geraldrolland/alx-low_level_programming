#include <stdlib.h>
#include "lists.h"
/**
 *free_list - free list
 *@head: pointer to the first node
 *Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}

