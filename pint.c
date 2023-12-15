#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line
 * @stack: the stack from the main
 * @line_count: the amount of lines
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_count)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_count);
		free_stack(stack_t *stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
