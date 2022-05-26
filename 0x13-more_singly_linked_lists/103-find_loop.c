#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *venus;
	listint_t *prev;

	venus = head;
	prev = head;
	while (head && venus && venus->next)
	{
		head = head->next;
		venus = venus->next->next;

		if (head == venus)
		{
			head = prev;
			prev =  venus;
			while (1)
			{
				venus = prev;
				while (venus->next != head && venus->next != prev)
				{
					venus = venus->next;
				}
				if (venus->next == head)
					break;

				head = head->next;
			}
			return (venus->next);
		}
	}

	return (NULL);
}
