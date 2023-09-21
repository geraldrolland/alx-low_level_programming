#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - add node at the beginning of a list
 *@head: pointer to the head pointer of a list
 *@str: string to copied
 *Return: head on success or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	unsigned int len = 0, i = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	while (ptr->str[i] != '\0')
	{
		len++;
		i++;
	}
	ptr->len = len;
	ptr->next = (*head);
	(*head) = ptr;
	return (*head);
}
