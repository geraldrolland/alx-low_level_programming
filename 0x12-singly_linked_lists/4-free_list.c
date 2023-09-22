#include <stdlib.h>
#include "lists.h"
/**
 *free_list - frees list
 *@head: pointer to the first node
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	if (head != NULL)
	{
		if (head->next == NULL)
		{
			free(head->str);
			free(head);
		}
		while (ptr->next != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr->str);
			free(ptr);
		}
		free(head);

	}
	return (NULL);
}
