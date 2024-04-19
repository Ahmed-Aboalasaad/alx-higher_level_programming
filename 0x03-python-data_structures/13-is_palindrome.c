#include "lists.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 *
 * @head: pointer to the head pointer of the list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
*/
int is_palindrome(listint_t **head)
{
	/* input validation */
	if (!head)
	{
		printf("Error: Null pointer to the head pointer");
		return (0);
	}

	/* Fill in the stack with the list */
	int size = 0;
	Stack *s;

	createStack(&s);
	for (listint_t *i = *head; i; i = i->next, size++)
	{
		push(s, i->n);
		if (!(i->next))
		{
			size++;
			break;
		}
	}

	/* an empty list & a singleton list are palindromes */
	if (size == 0 || size == 1)
		return (1);

	/* Scan the Stack array to decide if it's a palindrome */
	for (int i = 0, j = size - 1; j > i ; i++, j--)
		if (s->data[i] != s->data[j])
			return (0);
	return (1);
}

/**
 * createStack - creates a stack
 * and stores a pointer to it in the pointer pointer to by s
 *
 * @s: double pointer of a stack
 * Return: nothing
*/
void createStack(Stack **s)
{
	*s = malloc(sizeof(Stack));
	if (!(*s))
	{
		printf("failed to create a stack\n");
		return;
	}

	(*s)->capacity = 10;
	(*s)->count = 0;
	(*s)->data = malloc(sizeof(int) * (*s)->capacity);
	if (!((*s)->data))
		printf("failed to allocate an array while creating a stack\n");
}

/**
 * push - pushes x to the stack s
 *
 * @s: pointer to the stack
 * @x: the value to be pushed
 * Return: nothing
*/
void push(Stack *s, int x)
{
	if (!s)
	{
		printf("Received a Null stack pointer while pushing\n");
		return;
	}

	if (s->count == s->capacity)
		expand(s);
	s->data[s->count] = x;
	(s->count)++;
}
