#include "monty.h"

/**
*swap - swap frist two items of a stack.
*@stack: the stack to.
*@line_number: the line number.
*Return: None.
*/
void swap(stack_t **stack, unsigned int line_number)
{
	int a = 0;

	if (!*stack  || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		if (*stack)
			free(*stack);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = a;
}
