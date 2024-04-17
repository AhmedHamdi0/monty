#include "monty.h"

/**
 * free_head - Frees memory allocated for the head of arguments
 */
void free_head(void)
{
	if (arguments->head)
		free_stack(arguments->head);

	arguments->head = NULL;
}
