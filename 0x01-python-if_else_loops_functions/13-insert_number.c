#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 *
 * @head: pointer to the head pointer of the sorted list
 * @number: the number that the new node should have
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *current, *tmp;

	/* Input Validation */
	if (!head)
		return (NULL);

	/* Create the node */
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = number;
	new->next = NULL;

	/* If no nodes in the list */
	if (!*head)
	{
		*head = new;
		return (new);
	}

	for (current = *head; current->n < number; current = current->next)
	{
		if (!current->next) /* if no more nodes. put new after current */
		{
			current->next = new;
			return (new);
		}
		/* There is a node that's greater than new.. put new in between */
		if (current->next->n >= number)
		{
			tmp = current->next;
			current->next = new;
			new->next = tmp;
			return (new);
		}
	}
	/* It should be the first node in the list */
	new->next = *head;
	*head = new;
	return (new);
}
