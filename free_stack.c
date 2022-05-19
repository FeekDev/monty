#include "monty.h"

/**
 * free_stack - this function freedom the stack
 *
 * @top: the pointer
 */

void free_stack(stack_t *top)
{
	if (top == NULL)
		return;

	while (top)
	{
		stack_t *next = top->next;

		free(top);
		top = next;
	}
}
