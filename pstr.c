#include "monty.h"
/**
 * f_pstr - printing string start at a top of  stak,
 * following a new
 * @head: stack_head
 * @counter: linenumber
 * Return:does not return
*/
void f_pstr(stack_t **head, unsigned int counter)
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
