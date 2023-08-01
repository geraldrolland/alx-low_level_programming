#include "lists.h"
/**
*print_listint_safe - print list
*@head: head pointer to the first node
*Return: count
*/
size_t print_listint_safe(const listint_t *head)
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
