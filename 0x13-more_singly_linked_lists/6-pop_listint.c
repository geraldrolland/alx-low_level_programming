#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - delete the head node and return value
 *@head: pointer to the head pointer
 *Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL || head == NULL)
	{
		;
	}

	temp = *head;
	temp = temp->next;
	data = (*head)->n;
	free(*head);
	*head = temp;
	return (data);
}
