#include "monty.h"

/**
 * pstr - Prints the string starting from the top of the stack
 *
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	stack_t  *temp = arguments->head;

	while (temp != NULL)
	{
		if (temp->n <= 0 || temp->n > 127)
			break;

		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
