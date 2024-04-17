#include "monty.h"

/**
 * malloc_failed - Handles the case of failed memory allocation
 *
 * This function prints an error message indicating that memory allocation
 * has failed, frees any allocated memory, and exits the program with failure.
 */
void malloc_failed(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_arguments();
	exit(EXIT_FAILURE);
}
