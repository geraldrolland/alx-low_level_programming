#include "lists.h"
/**
*free_listint - free list
*@head: pointer to the first node in the list
*Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (1)
	{
		if (head->next == NULL)
		{
			free(head);
			head = NULL;
			break;
		}
		temp = head;
		free(temp);
		temp = NULL;
		head = head->next;
	}
}
