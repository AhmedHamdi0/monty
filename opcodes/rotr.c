#include "../monty.h"

/**
 * rotr - Rotates the stack to the bottom
 *
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last;

	(void) stack;
	(void) line_number;

	if (arguments->stack_length < 2)
		return;

	last = arguments->head;

	while (last)
	{
		if (last->next == NULL)
		{
			break;
		}
		last = last->next;
	}

	last->prev->next = NULL;
	last->next = arguments->head;
	last->prev = NULL;
	arguments->head = last;
}
