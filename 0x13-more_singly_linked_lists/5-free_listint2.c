#include "lists.h"
/**
*free_listint2 - free the list
*@head: pointer to the head pointer
*Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
