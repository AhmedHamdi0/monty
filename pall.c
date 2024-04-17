#include "monty.h"

/**
 * pall - Prints all the elements of a stack
 * @stack: Double pointer to the stack
 * @line_number: Line number of the instruction
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void) stack;
	(void) line_number;

	if (arguments->head == NULL)
		return;

	temp = arguments->head;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
