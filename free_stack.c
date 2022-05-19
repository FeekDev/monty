#include "monty.h"

/**
 * free_stack - freedom the stack
 *
 * @stack: pointer to nodes
 */

void free_stack(stack_t *stack)
{
	stack_t *current, *temp;

	current = stack;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
