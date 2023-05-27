#include "monty.h"
/**
 * ff_pall - printing th stack
 * @head: stack_ head
 * @counter: no used
 * Return: no return
*/
void ff_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
