#include "monty.h"
/**
 * ff_push - adding nodes tothe stack
 * @head: stack_head
 * @counter: line_number
 * Return: no return
*/
void ff_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (buss.arg)
	{
		if (buss.arg[0] == '-')
			j++;
		for (; buss.arg[j] != '\0'; j++)
		{
			if (buss.arg[j] > 57 || buss.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(buss.file);
			free(buss.content);
			ffree_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(buss.file);
		free(buss.content);
		ffree_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(buss.arg);
	if (buss.lifi == 0)
		aaddnode(head, n);
	else
		aaddqueue(head, n);
}
