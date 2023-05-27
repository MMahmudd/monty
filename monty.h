#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct buss_s - variables -args, file, line_content
 * @arg: value
 * @file: pointer to monty_file
 * @content: line_content
 * @lifi: flag_change stack <-> queue
 * Description: carries value via the program
 */

typedef struct buss_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  buss_t;

extern buss_t buss;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void ff_push(stack_t **head, unsigned int number);
void ff_pall(stack_t **head, unsigned int number);
int eexecute(char *content, stack_t **head, unsigned int counter, FILE *file);
void ffree_stack(stack_t *head);
void aaddnode(stack_t **head, int n);
void aaddqueue(stack_t **head, int n);
void ff_queue(stack_t **head, unsigned int counter);
void ff_pint(stack_t **head, unsigned int counter);

void ff_pop(stack_t **head, unsigned int counter);
void ff_swap(stack_t **head, unsigned int counter);
void ff_add(stack_t **head, unsigned int counter);
void ff_nop(stack_t **head, unsigned int counter);
void ff_sub(stack_t **head, unsigned int counter);
void ff_div(stack_t **head, unsigned int counter);
void ff_mul(stack_t **head, unsigned int counter);
void ff_mod(stack_t **head, unsigned int counter);
void ff_pchar(stack_t **head, unsigned int counter);
void ff_pstr(stack_t **head, unsigned int counter);
void ff_rotl(stack_t **head, unsigned int counter);
void ff_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);

void ff_stack(stack_t **head, unsigned int counter);

#endif
