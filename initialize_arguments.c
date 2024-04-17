#include "monty.h"

/**
 * initialize_arguments - Initializes the global arguments
 * which is a pointer to arg_t struct.
 *
 * This function allocates memory for the global arguments structure
 * and initializes its members to NULL.
 */
void initialize_arguments(void)
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
		malloc_failed();

	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
		malloc_failed();

	arguments->stream = NULL;
	arguments->line = NULL;
	arguments->line_number = 0;
	arguments->n_tokens = 0;
}
