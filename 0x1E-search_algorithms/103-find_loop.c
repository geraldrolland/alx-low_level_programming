#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in a linked list.
 * @head: this is the head pointer to the listint_t list.
 * Return: it returns the address where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pter;
	listint_t *previous;

	pter = head;
	previous = head;
	while (head && pter && pter->next)
	{
		head = head->next;
		pter = pter->next->next;

		if (head == pter)
		{
			head = previous;
			previous =  pter;
			while (1)
			{
				pter = previous;
				while (pter->next != head && pter->next != previous)
				{
					pter = pter->next;
				}
				if (pter->next == head)
					break;

				head = head->next;
			}
			return (pter->next);
		}
	}

	return (NULL);
}
