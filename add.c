#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: the stack provided by the main
 * @line_count: the number of lines
 * Return: void
 */
void add(stack_t **stack, unsigned int line_count)
{
	stack_t *x = *stack;
	stack_t *y = (*stack)->next;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_count);
		free_stack(stack_t *stack);
		exit(EXIT_FAILURE);
	}
	y->n += x->n;
	pop(stack, line_count);
}
