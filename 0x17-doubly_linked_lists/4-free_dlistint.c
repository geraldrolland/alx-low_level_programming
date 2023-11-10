#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to the head node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

