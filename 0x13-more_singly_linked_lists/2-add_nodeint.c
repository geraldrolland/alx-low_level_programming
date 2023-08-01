#include "lists.h"
/**
*add_nodeint - add node at the beginning of a single linked list
*@head: pointer to the head pointer of the node
*@n: data to be inserted
*Return: *head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
