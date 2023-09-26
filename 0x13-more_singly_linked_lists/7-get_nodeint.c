#include <stdlib.h>
#include "lists.h"
int node_size(listint_t *head);
/**
 *get_nodeint_at_index - get the node in a particular index
 *@head: pointer to the head node
 *@index: index of a node
 *Return: temp on success or NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int size, i = 0;

	if (head == NULL)
		return (NULL);
	size = node_size(head);
	if (index > size - 1)
		return (NULL);
	temp = head;
	while (i < size)
	{
		if (i == index)
		{
			break;
		}
		i++;
		temp = temp->next;
	}
	return (temp);

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
