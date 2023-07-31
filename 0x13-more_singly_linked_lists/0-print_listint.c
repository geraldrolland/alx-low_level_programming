#include <stdio.h>
#include "lists.h"
/**
*print_listint - prints all the elements of a listint_t list.
*@h: pointer to the first node
*Return: count
*/


size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		if (ptr->next == NULL)
		{
			count++;
			printf("%d\n", ptr->n);
			break;
		}
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}

