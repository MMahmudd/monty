#include "monty.h"
/**
* eexecute - executing the_opcode
* @stack: head linked_list stack
* @counter: line_count
* @file: poiner to monty_file
* @content: line contents
* Return: no return
*/
int eexecute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", ff_push}, {"pall", ff_pall}, {"pint", ff_pint},
				{"pop", ff_pop},
				{"swap", ff_swap},
				{"add", ff_add},
				{"nop", ff_nop},
				{"sub", ff_sub},
				{"div", ff_div},
				{"mul", ff_mul},
				{"mod", ff_mod},
				{"pchar", ff_pchar},
				{"pstr", ff_pstr},
				{"rotl", ff_rotl},
				{"rotr", ff_rotr},
				{"queue", ff_queue},
				{"stack", ff_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	buss.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		ffree_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
