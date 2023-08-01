#include "lists.h"
/**
*free_listint2 - free the list
*@head: pointer to the head pointer
*Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *temp;

	while (1 > 0)
	{
		if (ptr->next == NULL)
		{
			free(*head);
			*head = NULL;
			break;
		}
		temp = ptr;
		free(temp);
		ptr = ptr->next;
		*head = ptr;
	}
}
