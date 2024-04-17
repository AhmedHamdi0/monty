#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

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
} arg_t;

extern arg_t *arguments;

void validate_arguments(int argc);
void initialize_arguments(void);
void malloc_failed(void);
void get_stream(char *filename);
void tokenize_line(void);
void get_instruction(void);
void run_instruction(void);
void free_tokens(void);
void close_stream(void);


#endif /* MONTY_H */
