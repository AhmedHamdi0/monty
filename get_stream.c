#include "monty.h"

void getting_stream_failed(char *filename)
{
	dprintf(2, "Error: can't open file %s\n", filename);
//	free_arguments();
	exit(EXIT_FAILURE);
}

void get_stream(char *filename)
{
	int file_descriptor;
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		getting_stream_failed(filename);

	arguments->stream = fdopen(file_descriptor, "r");
	if(arguments == NULL)
	{
		close(file_descriptor);
		getting_stream_failed(filename);
	}
}
