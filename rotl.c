#include "monty.h"

/**
*rotl - flips a stack.
*@stack: the stack to.
*@line_number: the line number.
*Return: None.
*/

void rotl(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		stack_t *temp = *stack, *next = (*stack)->next;

		while (temp->next)
			temp = temp->next;

		temp->next = *stack;
		(*stack)->next = NULL;
		(*stack)->prev = temp;
		next->prev = NULL;
		*stack = next;
	}
}
