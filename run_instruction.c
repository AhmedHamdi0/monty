#include "monty.h"

/**
 * run_instruction - Executes the current instruction.
 *
 * This function checks if there are tokens to execute an instruction.
 * If there are tokens, it calls the function pointer stored in
 * 'arguments->instruction->f' and passes the stack and line number as
 * arguments to execute the current instruction.
 */
void run_instruction(void)
{
	stack_t *stack = NULL;

	if (arguments->n_tokens == 0)
		return;

	arguments->instruction->f(&stack, arguments->line_number);
}
