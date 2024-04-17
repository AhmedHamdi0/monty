#include "../monty.h"

/**
 * stack - Sets the mode of the program to stack (LIFO)
 *
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	arguments->stack = 1;
}
