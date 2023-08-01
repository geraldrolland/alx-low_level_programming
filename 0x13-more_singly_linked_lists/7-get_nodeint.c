#include "lists.h"
/**
*get_nodeint_at_index - return data of the specifid index node
*@head: head pointer to the first node
*@index: index of node
*Return: pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int data = 0;
	listint_t *ptr = head;

	while (ptr && data < index)
	{
		ptr = ptr->next;
		data++;
	}
	return (ptr ? ptr : NULL);

}

