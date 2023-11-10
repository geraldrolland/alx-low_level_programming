#include "lists.h"
/**
 *add_dnodeint - add node at the beginning of a doubly linked list
 *@head: pointer to the head pointer
 *@n: element to insert
 *Return: *head on success or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
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
	new->prev = NULL;
	new->n = n;
	new->next =  *head;
	(*head)->prev = new;
	*head = new;
	return *head;
	
}
