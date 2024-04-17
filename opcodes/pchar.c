#include "../monty.h"

/**
 * pchar - Prints the character at the top of the stack
 *
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void) stack;

	if (arguments->head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp = arguments->head;

	if (temp->n < 0 || temp->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", temp->n);
}
