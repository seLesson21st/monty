#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: the first stack element gine by main
 * @line_count: number of lines
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_count)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_count);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(temp);
}
