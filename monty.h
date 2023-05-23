#ifndef MONTY_H
#define MONTY_H
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
/**
 * struct stack_s - doubl link list represent of the stack
 * @n: integers
 * @prev: points to the prev element  stac
 * @next: point  next element of stack
 *
 * Description: doubl link list nodes structures
 * for stack, queues, LIFO, FIFO alx project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variable -args, file, line content.
 * @arg: valu
 * @file: pointer  monty files
 * @content: line contents
 * @lifi: flag changing stacks <-> queues
 * Description: carry value through  programs.
 */
typedef struct bus_s
{
	char *content;
	int lifi;
	char *arg;
        FILE *file;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opeartor code with its functio
 * @opcode:  opcod
 * @f: function handle the opcode
 *
 * Description: opcode, its functi0n
 * for stack, queues, LIFO, FIFO alx project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
#endif
