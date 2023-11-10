#include "lists.h"
/**
 *dlistint_len - return the size of a list
 *@h: pointer to the head node
 *Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
