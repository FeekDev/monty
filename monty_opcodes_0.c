#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
    stack_t *newNode = malloc(sizeof(stack_t));

    if (newNode == NULL)
    {
        fprintf(stderr, "L%d: can't malloc\n", line_number);
        exit(EXIT_FAILURE);
    }
    newNode->n = atoi(token);
    newNode->next = (*stack);
    newNode->prev = NULL;

    if ((*stack) != NULL)
        (*stack)->prev = newNode;

    (*stack) = newNode;
}

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *top;
    (void) line_number;
    if (*stack == NULL || stack == NULL)
		return;

    top = (*stack);
    while (top)
    {
        printf("%d\n", top->n);
        top = top->next;
    }
}