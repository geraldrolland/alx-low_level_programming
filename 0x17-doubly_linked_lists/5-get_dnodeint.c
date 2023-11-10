#include "lists.h"
/**
 *get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 *@head: pointer to the head node
 *@index: index of specified node
 *Return: temp on succes or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i, count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	temp = head;
	if (index > count - 1)
		return (NULL);
	i = 0;
	while (i != index)
	{
		i++;
		temp = temp->next;
	}
	return (temp);
}
