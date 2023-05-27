#include "monty.h"
/**
 * ff_pop - printing the Top
 * @head: stack_head
 * @counter: line_number
 * Return: no return
*/
void ff_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(buss.file);
		free(buss.content);
		ffree_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
