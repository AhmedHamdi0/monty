#include "monty.h"

/**
 * close_stream - Closes the file stream.
 *
 * This function checks if the file stream in 'arguments' is not NULL,
 * then closes the file stream and sets it to NULL to prevent accidental
 * access after closing.
 */
void close_stream(void)
{
	if (arguments->stream == NULL)
		return;

	fclose(arguments->stream);
	arguments->stream = NULL;
}
