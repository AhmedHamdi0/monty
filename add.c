#include "monty.h"

/**
 * add - Adds the top two elements of the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void add(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	stack_t *temp1, *temp2;

	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = arguments->head;
	temp2 = temp1->next;

	temp2->n = temp1->n + temp2->n;
	arguments->head = arguments->head->next;
	arguments->stack_length -= 1;
}
