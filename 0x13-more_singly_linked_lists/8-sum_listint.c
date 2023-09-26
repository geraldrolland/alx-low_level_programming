#include <stdlib.h>
#include "lists.h"
/**
 *sum_listint - sum of a list
 *@head: pointer to the first node
 *Return: sum on success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
