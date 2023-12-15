#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void process(const char *name);
void write(const stack_t *stack);
int main(int argc, char **argv);
void push(stack_t **stack, const char *arg, int count);
void pall(stack_t *stack);
void free_stack(stack_t *stack);
void add_stack(stack_t *stack, int size);
void pint(stack_t **stack, unsigned int line_count);
void pop(stack_t **stack, unsigned int line_count);
void swap(stack_t **stack, unsigned int line_count);
void add(stack_t **stack, unsigned int line_count);

#endif
