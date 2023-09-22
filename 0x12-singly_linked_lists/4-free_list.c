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
		if (head->next == NULL)
		{
			free(head->str);
			free(head);
		}
		ptr = head;
		while (ptr->next != NULL)
		{
			free(ptr->str);
			free(ptr);
			head = head->next;
			ptr = head;
		}
		free(head);

	}
}
