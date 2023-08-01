#include "lists.h"
/**
*sum_listint - return the sum of element in a list
*@head: pointer to the first node
*Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		if (ptr->next == NULL)
		{
			sum = sum + (ptr->n);
			break;
		}
		sum = sum + (ptr->n);
		ptr = ptr->next;
	}
	return (sum);
}
