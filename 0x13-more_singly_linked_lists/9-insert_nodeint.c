#include "lists.h"
/**
*insert_nodeint_at_index - insert node
*@head: pointer to the head pointer
*@idx: node index
*@n: insert data
*Return: NULL or new
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	unsigned int j;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (j = 0; ptr && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new->next = ptr->next;
			return (new);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
