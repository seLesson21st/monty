#include "monty.h"

/**
 * push -  pushes an element to the stack
 * @stack: the head to the stack
 * @arg: to be added
 * @count: the line number
 * Return: nothing
 */
void push(stack_t **stack, const char *arg, int count)
{
	int i = atoi(arg);
	
	if (!arg || !*arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		exit(EXIT_FAILURE);
	}

	if (i == 0 && *arg != '0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		exit(EXIT_FAILURE);
	}

	if (*stack->top == *stack->size - 1)
	{
		fprintf(stderr, "L%d: Stack overflow\n", count);
		exit(EXIT_FAILURE);
	}
	(*stack)->stack[++(*stack)->top] = i;
}
/**
 *free_stack - frees momery
 *@stack: memory to be freed
 */
void free_stack(stack_t *stack)
{
	free(*stack->stack);
}
