#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

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

/**
 * pop - pops the first element of the given stack
 *
 * @s: pointer to the stack
 * Return: nothing
*/
void pop(Stack *s)
{
	if (!s)
	{
		printf("Received a Null stack pointer while popping\n");
		return;
	}
	if (s->count == 0)
	{
		printf("Tried to pop an empty stack\n");
		return;
	}
	(s->count)--;
}

/**
 * top - returns the first element of the given stack without removing it
 *
 * @s: pointer to the stack
 * Return: the top element
*/
int top(Stack *s)
{
	if (!s)
	{
		printf("Received a Null stack pointer while getting the top.\n");
		return;
	}
	if (s->count == 0)
	{
		printf("Tried to get the top of an empty stack\n");
		return;
	}
	return (s->data[s->count - 1]);
}

/**
 * expand - expands the array of the given stack to 1.5 its capacity
 *
 * @s: pointer to the stack
 * Return: nothing
*/
void expand(Stack *s)
{
	if (!s)
	{
		printf("Received a Null stack pointer while expanding.\n");
		return;
	}
	s->capacity *= 1.5;
	int *tmp = malloc(sizeof(int) * s->capacity);

	if (!tmp)
	{
		pritnf("No enough memory while expanding the stack array\n");
		return;
	}

	for (int i = 0; i < s->count; i++)
		tmp[i] = s->data[i];
	free(s->data);
	s->data = tmp;
}

/**
 * freeStack - frees the given stack
 *
 * @s: pointer to the stack
 * Return: nothing
*/
void freeStack(Stack *s)
{
	if (!s)
	{
		printf("Received a Null stack pointer while freeing it\n");
		return;
	}
	free(s->data);
	free(s);
}

/**
 * printStack - prints the elements in the given stack
 *
 * @s: pointer to the stack
 * Return: nothing
*/
void printStack(Stack *s)
{
	printf("Stack:\n");
	for (int i = 0; i < s->count; i++)
		printf("%d- %d\n", i, s->data[i]);
}
