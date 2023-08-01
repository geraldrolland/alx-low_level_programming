#include "lists.h"
/**
*reverse_listint - reverse a list
*@head: pointer to the node pointer
*Return: *head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL;
	listint_t *temp2 = NULL;

	while (1 > 0)
	{
		if (*head == NULL)
		{
			*head = temp1;
			break;
		}
		temp2 = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = temp2;
	}
	return (*head);
}
