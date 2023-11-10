#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at specified index
 * @h: pointer to the head pointer
 * @idx: index of specified element
 * @n: data to insert
 * Return: *h on success or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL, *ptr = NULL;
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	if (h == NULL || *h == NULL)
	{
		free(new);
		return (NULL);
	}
	if (idx >= count_node(h))
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	temp = *h;
	i = 0;
	while (i != idx)
	{
		i++;
		ptr = temp;
		temp = temp->next;
	}
	ptr->next = new;
	new->prev = ptr;
	new->next = temp;
	temp->prev = new;
	new->n = n;
	return (*h);
}

/**
 * count_node - return the size of list
 * @head: pointer to the head pointer
 * Return: count
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

