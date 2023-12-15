#include "monty.h"

/**
 * add_stack - adds a new node to stack;
 * @stack: the stack head
 * @size: the size of new node
 */
void add_stack(stack_t *stack, size_t size)
{
	*stack = (stack_t *)malloc(size * sizeof(stack_t));
	if (stack == NULL)
	{
		fprintf(stderr, "Malloc failed\n");
		free(stack_t *stack);
		exit(EXIT_FAILURE);
	}
	stack->top = -1;
	stack->size = size;
}
/**
 * process - reads a Monty bytecode file, tokenizes each line, and executes
 * @name: the function to be read
 * Return: void
 */
void process(const char *name)
{
	stack_t *stack;
	initStack(&stack);
	char *opcode = strtok(line, " \t\n");
        char *arg = strtok(NULL, " \t\n");

	size_t len = strlen(line);

	FILE *file = fopen(name, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", name);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file) != NULL)
	{
		line_count++;

		if (len > 0 && line[len - 1] == '\n')
		{
			line[len - 1] = '\0';
		}

		if (opcode != NULL)
		{
			execute(opcode, arg, &stack, line_count);
		}
	}
	fclose(file);
	write(stack);
	free_stack(&stack);
}
