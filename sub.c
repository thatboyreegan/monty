#include "monty.h"

/**
*sub - sub the  first item from the second item of the stack.
*@stack: the stack .
*@line_number: the line number.
*Return: None.
*/

void sub(stack_t **stack, unsigned int line_number)
{
	int result = 0;

	if (!*stack  || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		if (*stack)
			free(*stack);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->next->n - (*stack)->n;
	(*stack)->next->n = result;
	pop(stack, line_number);
}
