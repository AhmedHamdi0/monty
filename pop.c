#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;

	if (arguments->head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	arguments->head = arguments->head->next;
	arguments->stack_length -= 1;
}
