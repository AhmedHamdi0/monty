#include "../monty.h"

/**
 * rotl - Rotates the stack to the top
 *
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	if (arguments->stack_length < 2)
		return;

	stack_t *temp1, *temp2;

	temp1 = arguments->head;
	temp2 = temp1->next;
	arguments->head = temp2;

	while (temp2)
	{
		if (temp2->next == NULL)
		{
			temp2->next = temp1;
			temp1->next = NULL;
			temp1->prev = temp2;
			break;
		}
		temp2 = temp2->next;
	}
}
