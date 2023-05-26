#include "monty.h"

void monty_add(stack_t **stack, unsigned int line_number);
void monty_sub(stack_t **stack, unsigned int line_number);
void monty_div(stack_t **stack, unsigned int line_number);
void monty_mul(stack_t **stack, unsigned int line_number);
void monty_mod(stack_t **stack, unsigned int line_number);

/**
 * monty_add - Adds the_top two_value of  stack_t linked_list.
 * @stack: pointer to the_top mode nod of stack_t linked_list.
 * @line_number: current working line number of Monty bytecodes_file.
 *
 * Description: result is stored in second value_node
 *              from the top and top value  can be removed.
 */
void monty_add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "add"));
		return;
	}

	(*stack)->next->next->n += (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_sub - Subtract second value from top of
 *             a stack_t linked_list by top value.
 * @stack: pointer to the top mode node of stack_t linked_list.
 * @line_number: current working line_number of Monty bytecode fil.
 *
 * Description: a result can be stored in the second value node
 *              from the top and the top value can be removed.
 */
void monty_sub(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "sub"));
		return;
	}

	(*stack)->next->next->n -= (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_div - Divides the second value from the top_of
 *             stack_t linked list by the top_value.
 * @stack: a pointer to thetop mode_node of  stack_t linked_list.
 * @line_number: The current working_line number of_Monty bytecode file.
 *
 * Description: result can be stored in the second value_node
 *              from the topp and the top values can be removed.
 */
void monty_div(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "div"));
		return;
	}

	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_number));
		return;
	}

	(*stack)->next->next->n /= (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_mul - Multiplies a second_value fromthe top of
 *             a stack_t linked_list via the top value.
 * @stack: A pointer to the top mode node of a stack_t linked_list.
 * @line_number: The current working line_number of Monty bytecode file.
 *
 * Description: The result can be stored inthe second value_node
 *              from the top and the top value can be removed out.
 */
void monty_mul(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "mul"));
		return;
	}

	(*stack)->next->next->n *= (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_mod - Computs themodulus ofthe second value from
 *             top of stack_t linked_list via the top_value.
 * @stack: pointer tothe  top mode_node of a stack_t linked_list.
 * @line_number: current working line_number of Monty bytecodes file.
 *
 * Description: a result can be stored in the second value node
 *              from the top and the top value can be removed out.
 */
void monty_mod(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "mod"));
		return;
	}

	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_number));
		return;
	}

	(*stack)->next->next->n %= (*stack)->next->n;
	monty_pop(stack, line_number);
}
