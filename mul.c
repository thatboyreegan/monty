#include "monty.h"

/**
*mul - multiply frist two items of a stack.
*@stack: the stack to.
*@line_number: the line number.
*Return: None.
*/

void mul(stack_t **stack, unsigned int line_number)
{
	int result = 0;

	if (!*stack  || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		if (*stack)
			free(*stack);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->next->n * (*stack)->n;
	(*stack)->next->n = result;
	pop(stack, line_number);
}
