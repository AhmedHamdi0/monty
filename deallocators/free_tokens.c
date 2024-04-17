#include "../monty.h"

/**
 * free_tokens - Frees memory allocated for tokens.
 *
 * This function frees the memory allocated for the 'tokens' array in the
 * 'arguments' structure. It first checks if the 'tokens' array is NULL
 * to avoid de-referencing a NULL pointer, and then iteratively frees each
 * token in the array and finally frees the array itself.
 */
void free_tokens(void)
{
	int i = 0;

	if (arguments->tokens == NULL)
		return;

	while (arguments->tokens[i])
	{
		free(arguments->tokens[i]);
		i++;
	}
	free(arguments->tokens);
	arguments->tokens = NULL;
}
