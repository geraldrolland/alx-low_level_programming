#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
*looped_listint_len - print list
*@head: head pointer to the first node
*Return: count
*/
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ptr;
	const listint_t *temp;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	ptr = head->next;
	temp = (head->next)->next;



	while (temp)
	{
		if (ptr == temp)
		{
			ptr = head;
			while (ptr != temp)
			{
				count++;
				ptr = ptr->next;
				temp = temp->next;
			}
			ptr = ptr->next;
			while (ptr != temp)
			{
				count++;
				ptr = ptr->next;
			}
			return (count);
		}
		ptr = ptr->next;
		temp = (temp->next)->next;
	}
	return (0);
}
/**
*print_listint_safe - print list
*@head: head pointer
*Return: n
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
