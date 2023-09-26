#include <stdlib.h>
#include "lists.h"
/**
 *reverse_listint - reverse a list
 *@head: pointer ot the head pointer
 *Return: *head on success
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1 = NULL, *ptr2 = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	ptr1 = *head;
	while (*head != NULL)
	{
		ptr1 = (*head)->next;
		(*head)->next = ptr2;
		ptr2 = *head;
		*head = ptr1;
	}
	*head = ptr2;
	return (*head);

}
