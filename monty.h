#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 4096

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct arg_s - Structure for handling common variables.
 * @stream: Pointer to the FILE stream
 * @line: Pointer to the line data
 * @line_number: Line number for the current instruction
 * @n_tokens: Number of tokens parsed from the input line
 * @tokens: Array of tokens parsed from the input line
 * @instruction: Pointer to the current instruction
 * @head: Pointer to the head of the stack
 * @stack_length: Number of elements in the stack
 * @stack: Flag indicating whether the program is using a stack or queue
 *
 * Description: This structure is used for handling common variables
 * used across the whole program.
 */
typedef struct arg_s
{
	FILE *stream;
	char *line;
	unsigned int line_number;
	int n_tokens;
	char **tokens;
	instruction_t *instruction;
	stack_t *head;
	int stack_length;
	int stack;
} arg_t;

extern arg_t *arguments;

/* opcodes */
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);

/* utils */
void validate_arguments(int argc);
void initialize_arguments(void);
void malloc_failed(void);
int is_number(char *str);

/* parser */
void get_stream(char *fileName);
void tokenize_line(void);
void close_stream(void);

/* de-allocators */
void free_tokens(void);
void free_arguments(void);
void free_stack(stack_t *head);
void free_head(void);
void free_all_args(void);

/* main */
void get_instruction(void);
void run_instruction(void);

#endif /* MONTY_H */
