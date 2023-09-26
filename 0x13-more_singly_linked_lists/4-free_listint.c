#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - free list
 *@head: pointer to the first node
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
