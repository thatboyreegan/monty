#include "monty.h"

/**
*pop - remove item a the top of the stack.
*@stack: the stack to pop from.
*@line_number: the line number.
*Return: None.
*/

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		free(*stack);
		exit(EXIT_FAILURE);
	}



	*stack = (*stack)->next;
	free(temp);

	if (*stack)
		(*stack)->prev = NULL;
}
