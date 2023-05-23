#include "monty.h"
/**
* free_stack - freely doubl link list
* @head: head_of_ the_ stack
*/
void free_stack(stack_t *head)
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
