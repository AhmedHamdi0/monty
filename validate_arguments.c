#include "monty.h"

/**
 * validate_arguments - Validates the number of command-line arguments
 * @argc: The number of command-line arguments
 *
 * This function checks if the number of command-line arguments is 2.
 * If not, it prints an error message and exits with EXIT_FAILURE.
 */
void validate_arguments(int argc)
{
	if (argc == 2)
		return;

	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
