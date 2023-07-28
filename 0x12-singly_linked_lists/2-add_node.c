#include <stdlib.h>
#include <string.h>
#include "_strlen.c"
#include "lists.h"

/**
*add_node - adds a new node at the beginning of a list_t list.
*@head: double pointer to a string
*@str: pointer to a string
*Return: *head or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
