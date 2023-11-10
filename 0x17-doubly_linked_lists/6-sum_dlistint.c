#include "lists.h"

/**
 *sum_dlistint -  returns the sum of all the data (n) of a linked list.
 *@head: pointer to the head node
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = NULL;

	if (head == NULL)
		return (sum);
	ptr = head;
	while (ptr != NULL)
	{
		sum += (ptr->n);
		ptr = ptr->next;
	}
	return (sum);
}
