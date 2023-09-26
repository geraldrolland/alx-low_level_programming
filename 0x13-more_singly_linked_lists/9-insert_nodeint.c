#include <stdlib.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - insert node at specified index
 *@head: pointer to the head pointer
 *@idx: index of node to be inserted
 *@n: data value
 *Return: *head on success or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size, i = 0;
	listint_t *ptr1 = NULL;
	listint_t *ptr2 = NULL;
	listint_t *new = NULL;

	if (head == NULL)
		return (NULL);
	size = node_size(*head);
	if (idx > size)
		return (NULL);
	ptr1 = *head;
	if (idx == 0 || *head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (i < size)
	{
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = ptr1;
			ptr2->next = new;
			break;

		}
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		i++;
	}
	return (*head);
}
/**
 *node_size - size of a list
 *@head: pointer to the head node
 *Return: count
 */
int node_size(listint_t *head)
{
	int count = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
