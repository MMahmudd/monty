#include "monty.h"
/**
 * ff_pstr - printing string starting from the top of the stack,
 * following by a new line
 * @head: stack_head
 * @counter: line_number
 * Return: no return
*/
void ff_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
