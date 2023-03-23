#include "monty.h"

/**
*add - add frist two items of a stack.
*@stack: the stack.
*@line_number: the line number.
*Return: None.
*/

void add(stack_t **stack, unsigned int line_number)
{
	int result = 0;

	if (!*stack  || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		if (*stack)
			free(*stack);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->n + (*stack)->next->n;
	(*stack)->next->n = result;
	pop(stack, line_number);
}
