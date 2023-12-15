#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: The stack provide by the main
 * @line_count: the number of lines
 * Retrun: void
 */
void swap(stack_t **stack, unsigned int line_count)
{
	stack_t *x = *stack;
	stack_t *y = x->next;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_count);
		exit(EXIT_FAILURE);
	}
	x->next = y->next;
	x->prev = y;
	y->prev = NULL;
	y->next = x;

	*stack = y;
}
