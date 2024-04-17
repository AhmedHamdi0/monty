#include "monty.h"

/**
 * tokenize_line - Tokenizes the input line into individual tokens.
 */
void tokenize_line(void)
{
	int i = 0;
	char *delimiters = " \n";
	char *token = NULL;
	char *line_copy = NULL;

	line_copy = malloc(sizeof(char) * (strlen(arguments->line) + 1));
	strcpy(line_copy, arguments->line);

	arguments->n_tokens = 0;
	token = strtok(line_copy, delimiters);
	while (token)
	{
		arguments->n_tokens += 1;
		token = strtok(NULL, delimiters);
	}

	arguments->tokens = malloc(sizeof(char *) * (arguments->n_tokens + 1));
	strcpy(line_copy, arguments->line);
	token = strtok(line_copy, delimiters);
	while (token)
	{
		arguments->tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (arguments->tokens[i] == NULL)
			malloc_failed();

		strcpy(arguments->tokens[i], token);
		token = strtok(NULL, delimiters);
		i++;
	}
	arguments->tokens[i] = NULL;
	free(line_copy);
}
