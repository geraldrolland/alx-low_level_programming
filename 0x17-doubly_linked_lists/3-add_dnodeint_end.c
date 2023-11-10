#include "lists.h"

/**
 *add_dnodeint_end - add node at the end of a doubly linked list
 *@head: pointer to head pointer
 *@n: data to insert
 *Return: *head on sucess or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *ptr = NULL;

	new = malloc(sizeof(dlistint_t));
	if (head == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	new->next = ptr->next;
	new->prev = ptr;
	ptr->next = new;
	new->n = n;
	return (*head);
}
