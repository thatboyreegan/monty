#include "monty.h"

/**
*pchar - print first items of the stack as a char.
*@stack: the stack.
*@line_number: the line number.
*Return: None.
*/

void pchar(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}


	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		free(*stack);
		exit(EXIT_FAILURE);
	}


	printf("%c\n", (*stack)->n);
}
