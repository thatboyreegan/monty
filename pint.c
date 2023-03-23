#include "monty.h"

/**
*pint - print item at the top of the stack.
*@stack: the stack to push to.
*@line_number: the line number.
*Return: None.
*/

void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		free(*stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
