#include "../monty.h"

/**
 * free_stack - Frees a stack starting from the given head
 * @head: Pointer to the head of the stack
 */
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_stack(head->next);
	}

	free(head);
}
