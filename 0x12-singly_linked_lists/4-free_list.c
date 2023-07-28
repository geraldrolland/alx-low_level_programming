#include <stdlib.h>
#include "lists.h"
/**
*free_list -  frees a list_t list.
i*@head: pointer to a node
*Return: void
*/

void free_list(list_t *head)
{
	list_t *ptr;

	while (1)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}

