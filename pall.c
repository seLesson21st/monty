#include "monty.h"

/**
 * pall - prints the stack
 * @stack: head to the stack
 */
void pall(stack_t *stack)
{
	int i;

	for (i = stack->top; i >= 0; i--)
	{
		printf("%d\n", stack->stack[i]);
	}
}
