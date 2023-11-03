#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - checks if a singly linked list has a cycle.
 *
 * @head: the list head
 * Return: 1 if there is a cycle in the list, 0 otherwise
*/
int check_cycle(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (0);
	if (!head->next)
		return (0);

	for (slow = head, fast = head->next; fast->next && fast->next->next; )
	{
		if (slow == fast)
			return (1);
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
