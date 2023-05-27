#include "monty.h"
/**
 * ff_pint - printing the top
 * @head: stack_head
 * @counter: line_number
 * Return: no return
*/
void ff_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(buss.file);
		free(buss.content);
		ffree_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
