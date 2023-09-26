#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - free list
 *@head: pointer to the head pointer
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}
