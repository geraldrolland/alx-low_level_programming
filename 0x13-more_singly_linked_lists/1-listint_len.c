#include "lists.h"
/**
*listint_len - returns the number of elements in a linked listint_t list.
*@h: pointer to the first node
*Return: num
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t num = 0;

	while (h)
	{
		if (ptr->next == NULL)
		{
			num++;
			break;
		}
		num++;
		ptr = ptr->next;
	}
	return (num);
}
