#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index index of a linked list
 *@head: pointer to the head pointer
 *@index: index of the node to be deleted
 *Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = NULL, *temp = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index >= count_node(head))
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	ptr = *head;
	i = 0;
	while (i != index)
	{
		i++;
		temp = ptr;
		ptr = ptr->next;
	}

	temp->next = ptr->next;
	if (ptr->next != NULL)
	{
		ptr->next->prev = temp;
	}
	free(ptr);
	return (1);
}

/**
 *count_node - return the size of list
 *@head: pointer to the head pointer
 *Return: count
 */
unsigned int count_node(dlistint_t **head)
{
	unsigned int count = 0;
	dlistint_t *ptr = *head;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
