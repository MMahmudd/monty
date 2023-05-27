#include "monty.h"
/**
 * ff_pchar - printing the characters at the top of stack,
 * following via a new line
 * @head: stack_head
 * @counter: line_numbr
 * Return: no return
*/
void ff_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(buss.file);
		free(buss.content);
		ffree_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(buss.file);
		free(buss.content);
		ffree_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
