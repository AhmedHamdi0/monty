#include "../monty.h"

/**
 * pall - Prints all the elements of a stack
 * @stack: Double pointer to the stack
 * @line_number: Line number of the instruction
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (arguments->head == NULL)
		return;

	(void) stack;
	(void) line_number;

	tmp = arguments->head;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
