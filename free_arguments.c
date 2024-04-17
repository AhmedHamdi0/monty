#include "monty.h"

/**
 * free_arguments - Frees memory allocated for arguments
 */
void free_arguments(void)
{
	if (arguments == NULL)
		return;

	if (arguments->instruction)
	{
		free(arguments->instruction);
		arguments->instruction = NULL;
	}

	free_head();

	if (arguments->line)
	{
		free(arguments->line);
		arguments->line = NULL;
	}

	free(arguments);
}
