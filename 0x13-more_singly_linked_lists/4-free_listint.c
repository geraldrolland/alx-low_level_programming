#include "lists.h"
/**
*free_listint - free list
*@head: pointer to the first node in the list
*Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		if(head->next == NULL)
		{
			free (head);
			break;
		}
		temp = head;
		free(temp);
		head = head->next;
	}
}
