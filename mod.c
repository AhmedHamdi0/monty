#include "monty.h"

/**
 * mod -  Computes modulus of the top two elements of the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void mod(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	stack_t *temp1, *temp2;

	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = arguments->head;
	temp2 = temp1->next;

	if (temp1->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp2->n = temp2->n % temp1->n;
	arguments->head = arguments->head->next;
	arguments->stack_length -= 1;
}
