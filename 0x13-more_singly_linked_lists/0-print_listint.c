#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint - print the data in list and return size of list
 *@h: pointer to the head pointer
 *Return: size
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr->next != NULL)
	{
		printf("%d\n", ptr->n);
		size++;
		ptr = ptr->next;
	}
	printf("%d\n", ptr->n);
	size++;
	return (size);

}
