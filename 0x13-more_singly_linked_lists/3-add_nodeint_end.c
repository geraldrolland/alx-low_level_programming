#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - add node at the end of a list
 *@head: pointer to the head pointer
 *@n: data value
 *Return: *head on success or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	if (*head == NULL)
	{
		ptr->n = n;
		ptr->next = NULL;
		*head = ptr;
		return (*head);
	}
	temp = *head;
	while (1 > 0)
	{
		if (temp->next == NULL)
		{
			ptr->n = n;
			ptr->next = NULL;
			temp->next = ptr;
			break;
		}
		temp = temp->next;
	}
	return (*head);

}
