#include "monty.h"

/**
 * invalid_instruction - Handles an invalid instruction error.
 *
 * This function prints an error message to stderr indicating that an unknown
 * instruction was encountered in the Monty file, closes the stream, frees
 * allocated memory, and exits with EXIT_FAILURE.
 */
void invalid_instruction(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
			arguments->line_number, arguments->tokens[0]);
	free_all_args();
	exit(EXIT_FAILURE);
}

/**
 * get_instruction - Retrieves the appropriate function for the instruction.
 *
 * This function compares the first token in the 'tokens' array to the list
 * of valid instructions and assigns the corresponding function pointer to
 * 'arguments->instruction->f'. If the instruction is not found, it calls
 * the 'invalid_instruction' function.
 */
void get_instruction(void)
{
	int i = 0;
	instruction_t instructions[] = {
			{"push", &push}, {"pall", &pall}, {"pint", &pint}, {"pop", &pop},
			{"swap", &swap}, {"add", &add}, {"nop", &nop}, {"sub", &sub},
			{"div", &_div}, {"mul", &mul}, {"mod", &mod}, {"pchar", &pchar},
			{"pstr", &pstr}, {"rotl", &rotl}, {"rotr", &rotr},
			{"stack", &stack}, {"queue", &queue}, {NULL, NULL}
	};

	if (arguments->n_tokens == 0)
		return;

	if (arguments->tokens[0][0] == '#')
	{
		arguments->instruction->opcode = "nop";
		arguments->instruction->f = nop;
		return;
	}

	for (; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, arguments->tokens[0]) == 0)
		{
			arguments->instruction->opcode = instructions[i].opcode;
			arguments->instruction->f = instructions[i].f;
			return;
		}
	}
	invalid_instruction();
}
