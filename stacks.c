#include "monty.h"
#include <string.h>

void free_stack(stack_t **stack);
int init_stack(stack_t **stack);
int check_mode(stack_t *stack);

/**
 * free_stack - make Free the stack_t stack.
 * @stack:  point to the top (stack) or
 *         bottom queue of the stack_t.
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

/**
 * init_stack - Initialization the stack_t stack wz beginning
 *              stack & end queues node.
 * @stack: Apointer to be  unitialized stack_t stacks.
 *
 * Return: If having errors  - EXIT_FAILURE.
 *         otherwise - EXIT_SUCCESS.
 */
int init_stack(stack_t **stack)
{
	stack_t *s;

	s = malloc(sizeof(stack_t));
	if (s == NULL)
		return (malloc_error());

	s->n = STACK;
	s->prev = NULL;
	s->next = NULL;

	*stack = s;

	return (EXIT_SUCCESS);
}

/**
 * check_mode - Checking if stack_t linked_list is in_stack or in_queue mod.
 * @stack: the pointer to the top stacks or bottom queues
 *         of stack_t linked_list.
 *
 * Return: If the stack_t can be in stack mode - STACK (0).
 *         If the stack_t can be in queue mode - QUEUE (1).
 *         otherwise - 2.
 */
int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (2);
}
