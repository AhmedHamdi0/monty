#include "../monty.h"

/**
 * _div - Divides the top two elements of the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;

	if (arguments->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp1 = arguments->head;
	temp2 = temp1->next;

	if (temp1->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	temp2->n = temp2->n / temp1->n;
	arguments->head = arguments->head->next;
	arguments->stack_length -= 1;
}
