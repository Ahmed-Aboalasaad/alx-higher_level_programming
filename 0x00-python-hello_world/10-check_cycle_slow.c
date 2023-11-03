#include "lists.h"

/**
 * add - adds a new address to the array of visited addresses (visited)
 *
 * @visited: the array of visited addresses
 * @address: the address to be added
 * Return: The new array (after addition)
*/
listint_t **add(listint_t **visited, listint_t *address)
{
	int size = 0, i;
	listint_t **new;

	/* First visit */
	if (!visited)
	{
		new = malloc(sizeof(*visited) * 2);
		if (!new)
			exit(EXIT_FAILURE); /* Allocation Error */
		new[1] = NULL;
		new[0] = address;
		return (new);
	}

	/* latter visit */
	while (visited[size])
		size++;
	new = malloc(sizeof(*new) * (size + 2));
	if (!new)
		exit(EXIT_FAILURE); /* Allocation Error */
	new[size + 1] = NULL;
	new[size] = address;
	for (i = 0; i < size; i++)
	{
		new[i] = visited[i];
	}
	free(visited);
	return (new);
}

/**
 * contains - checker if the visited array contains the given address
 *
 * @visited: the array of visited addresses
 * @address: the address to be added
 * Return: char 1 if it contains the given address, NULL character otherwise
*/
char contains(listint_t **visited, listint_t *address)
{
	int i;

	if (!visited)
	{
		printf("no visited array was created\n");
		exit(2);
	}
	for (i = 0; visited[i]; i++)
		if (visited[i] == address)
			return (1);
	return (0);
}

/**
 * check_cycle - checks if a singly linked list has a cycle.
 *
 * @head: the list head
 * Return: 1 if there is a cycle in the list, 0 otherwise
*/
int check_cycle(listint_t *head)
{
	listint_t **visited, *tmp;

	if (!head)
		return (0);

	for (tmp = head; tmp->next; tmp = tmp->next)
		if (tmp >= tmp->next)
			return (1);
	return (0);

	visited = add(NULL, head);
	for (; head->next; head = head->next)
	{
		if (contains(visited, head->next))
		{
			free(visited);
			return (1);
		}
		visited = add(visited, head->next);
	}

	free(visited);
	return (0);
}
