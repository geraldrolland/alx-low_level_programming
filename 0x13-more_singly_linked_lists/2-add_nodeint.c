#include "lists.h"
/**
*add_nodeint - add node at the beginning of a single linked list
*@head: pointer to the head pointer of the node
*@n: data to be inserted
*Return: *head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (*head == NULL)
		return (NULL);
	const listint_t *ptr = *head;

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
