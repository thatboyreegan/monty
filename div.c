#include "monty.h"

/**
*_div - divide the first item by the second item.
*@stack: the stack.
*@line_number: the line number.
*Return: None.
*/

void _div(stack_t **stack, unsigned int line_number)
{
	int result = 0;

	if (!*stack  || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		if (*stack)
			free(*stack);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
		fprintf(stderr, "L%u: division by zero\n", line_number);

	result = (*stack)->next->n / (*stack)->n;
	(*stack)->next->n = result;
	pop(stack, line_number);
}
