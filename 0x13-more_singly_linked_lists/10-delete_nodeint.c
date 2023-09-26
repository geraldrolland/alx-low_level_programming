#include <stdlib.h>
#include "lists.h"
unsigned int node_count(listint_t *head);
/**
 *delete_nodeint_at_index - delete index at a specific node
 *@head: pointer to the head pointer
 *@index of the node to deleted
 *Return: 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, size = 0;
	listint_t *ptr1 = NULL, *ptr2 = NULL;
	if (head == NULL || *head == NULL)
		return (-1);
	size = node_count(*head);
	if (index > size - 1)
		return (-1);
	ptr1 = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr1);
		return (1);
	}
	while (i < size)
	{
		if (i == index)
		{
			ptr2->next = ptr1->next;
			free(ptr1);
			break;
		}
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		i++;
	}
	return (1);

}
/**
 *node_count - size of a list
 *@head: pointer to the head node
 *Return: count
 */
unsigned int node_count(listint_t *head)
{
	unsigned int count = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

