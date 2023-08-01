#include "lists.h"
/**
*delete_nodeint_at_index - delete node
*@head: pointer to the head pointer
*@index: index of node
*Return: 1or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (i < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		i++;
	}
	current = ptr->next;
	ptr->next = current->next;
	free(current);
	return (1);
}
