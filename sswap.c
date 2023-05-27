#include "monty.h"
/**
 * ff_swap - adding the top two_elements of ze stack.
 * @head: stack_head
 * @counter: line_number
 * Return: no return
*/
void ff_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(buss.file);
		free(buss.content);
		ffree_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
