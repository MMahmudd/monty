#include "monty.h"
/**
 * ff_queue - printing top
 * @head: stack_head
 * @counter: line_number
 * Return: no return
*/
void ff_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	buss.lifi = 1;
}

/**
 * aaddqueue - adding nodes tothe tail_stack
 * @n: new_value
 * @head: head ofthe stack
 * Return: no return
*/
void aaddqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
