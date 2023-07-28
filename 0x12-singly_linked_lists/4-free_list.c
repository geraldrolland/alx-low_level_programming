#include <stdlib.h>
#include "lists.h"
/**
*free_list -  frees a list_t list.
*@head: pointer to a node
*Return: void
*/

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while(1)
	{
		if (ptr == NULL)
		{
			free (head);
			break;
		}
		ptr = ptr->next;
		free (ptr);
	}
}

