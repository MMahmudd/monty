#include "monty.h"
/**
* ffree_stack - free  doubly_linked list
* @head: head ofthe stack
*/
void ffree_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
