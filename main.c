#include "monty.h"

arg_t *arguments = NULL;

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: A pointer to an array of strings containing
 * the command-line arguments.
 * Return: returns 0 (success).
 */

int main(int argc, char *argv[])
{
	char buffer[MAX_LINE_LENGTH];

	validate_arguments(argc);
	initialize_arguments();
	get_stream(argv[1]);

	arguments->line = malloc(MAX_LINE_LENGTH * sizeof(char));
	if (arguments->line == NULL)
	{
		fprintf(stderr, "Error: Failed to allocate memory\n");
		exit(EXIT_FAILURE);
	}

	while (fgets(buffer, MAX_LINE_LENGTH, arguments->stream) != NULL)
	{
		arguments->line_number += 1;
		strncpy(arguments->line, buffer, MAX_LINE_LENGTH);
		tokenize_line();
		get_instruction();
		run_instruction();
		free_tokens();
	}

	close_stream();
	free_arguments();
	return (0);
}
