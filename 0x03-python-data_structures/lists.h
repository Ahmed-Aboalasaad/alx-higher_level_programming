#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int is_palindrome(listint_t **head);

/**
 * struct stack - a stack struct implemented with arrays
 * @capacity: current capacity of the underlying array
 * @count: number of elements in the array
 * @data: the array holding the data
*/
typedef struct stack
{
	int capacity;
	int count;
	int *data;
} Stack;
void createStack(Stack **s);
void push(Stack *s, int x);
void pop(Stack *s);
int top(Stack *s);
void expand(Stack *s);
void freeStack(Stack *s);
void printStack(Stack *s);

#endif /* LISTS_H */
