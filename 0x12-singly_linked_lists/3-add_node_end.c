#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include "_strlen.c"
/**
*add_node_end -  adds a new node at the end of a list_t list.
*@head: double pointer to a string
*@str: pointer to a string
*Return: NULL or temp
*/



list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *ptr;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
