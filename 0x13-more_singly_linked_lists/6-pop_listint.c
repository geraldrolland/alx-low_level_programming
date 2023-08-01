#include "lists.h"
/**
*pop_listint -  delete first node and return data
*@head: pointer to the head pointer
*Return: data
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (!head || !*head)
		return (0);
	ptr = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (data);
}
