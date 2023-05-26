#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - Print pop errors_messages for_empty stack.
 * @line_number: Line_number in script wherethere errors occur.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - Print pint_errors message for_empty stack.
 * @line_number: Line_number in Monty bytecodes fil wherethere errors occure.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - Prints monty math_functio error_ messages
 *                     for stack/queue smaller than two nods.
 * @line_number: Line_number in Monty bytecodes file wherethere error_occurred.
 * @op: Operation wherethere the errors_occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - Prints division error_messages for_division by 0.
 * @line_number: Line_numbers in Monty bytecodes file wherethere error_occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - Print pchar error_messages for_empty stack
 *               empty_stack and non-character value.
 * @line_number: Line_number in Monty bytecodes file wherethere error_occurr.
 * @message:  Corresponding erro0r_messages to_print.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
