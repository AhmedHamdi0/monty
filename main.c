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
	size_t n = 0;

	validate_arguments(argc);
	initialize_arguments();
	get_stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		arguments->line_number += 1;
		tokenize_line();
		get_instruction();
		run_instruction();
		free_tokens();
		printf("L%d: %s", arguments->line_number, arguments->line);
	}

	close_stream();
	free_arguments();
	return (0);
}
