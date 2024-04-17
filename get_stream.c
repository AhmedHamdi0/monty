#include "monty.h"

/**
 * getting_stream_failed - Handles the case of failed file opening
 * @filename: The name of the file that failed to open
 *
 * This function prints an error message indicating that a file couldn't be
 * opened and exits the program with failure.
 */
void getting_stream_failed(char *filename)
{
	fprintf(stderr, "Error: can't open file %s\n", filename);
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
 * get_stream - Opens a file stream for reading
 * @filename: The name of the file to open
 *
 * This function opens a file stream for reading and associates it with the
 * global arguments structure.
 */
void get_stream(char *filename)
{
	int file_descriptor;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		getting_stream_failed(filename);

	arguments->stream = fopen(filename, "r");
	if (arguments->stream == NULL)
	{
		close(file_descriptor);
		getting_stream_failed(filename);
	}
}
