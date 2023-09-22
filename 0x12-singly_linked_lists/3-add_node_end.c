#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node_end - add node at the beginning of the list
 *@head: head to the pointer of the first node
 *@str: string to be copied
 *Return: *head on succes or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *new;
	unsigned int i, len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; new->str[i]; i++)
	{
		len++;
	}
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (1 > 0)
	{
		if (ptr->next == NULL)
		{
			ptr->next = new;
			break;
		}
		ptr = ptr->next;
	}
	return (*head);
}
