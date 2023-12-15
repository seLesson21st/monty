#include "monty.h"
/**
 * write - function that prints stack
 * @stack: to be printed
 * Return: void
 */
void write(const stack_t *stack)
{
	if (stack != NULL)
	{
		printf("%d\n", stack->n);
	}
}

/**
 * execute - function tha executes opcode
 * @opcode: code to be executed
 * @arg: argument passed
 * @stack: the head of the stack
 * @line_count: the number of lines
 * Return: nothing
 */
void execute(const char *opcode, const char *arg, stack_t **stack,
		unsigned int line_count)
{
	if (strcmp(opcode, "push") == 0)
	{
		execute(stack, arg, line_count);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		execute(*stack);
	}
	else if (strcmp(opcode, "pint") == 0)
	{
		pint(stack, line_count);
	}
	else if (strcmp(opcode, "pop") == 0)
	{
		pop(stack, line_count);
	}
	else if (strcmp(opcode, "swap") == 0)
	{
		swap(stack, line_count);
	}
	else if (strcmp(opcode, "add") == 0)
	{
		add(stack, line_count);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_count, opcode);
		free_stack(&stack);
		exit(EXIT_FAILURE);
	}
}
