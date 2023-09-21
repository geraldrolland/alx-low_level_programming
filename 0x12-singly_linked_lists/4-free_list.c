#include <stdlib.h>
#include "lists.h"
/**
 *free_list - frees list
 *@head: pointer to the first node
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr->str);
			free(ptr);
		}
		free(head);

	}
}
