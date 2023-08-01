#include "lists.h"
/**
*free_listint2 - free the list
*@head: pointer to the head pointer
*Return: void
*/
void free_listint2(listint_t **head)
{
	int num;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	num = (*head)->next;
	temp = (*head)->n;
	free(*head);
	*head = temp;

	return (num);
}
