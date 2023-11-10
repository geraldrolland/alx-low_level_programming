#include "lists.h"

/**
 *free_dlistint - free a doubly linked list
 *@head: pointer to the head node
 *Return: head on sucess or NULL on failure
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (NULL);
	head = head->next;
	free(head->prev);
	while (head != NULL)
	{
		head = head->next;
		free(head->prev);

	}
	return (head);
}
