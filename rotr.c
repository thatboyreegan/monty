#include "monty.h"

/**
*rotr - flips a stack.
*@stack: the stack to.
*@line_number: the line number.
*Return: None.
*/

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack && (*stack)->next)
	{
		while (temp->next)
			temp = temp->next;

		temp->prev->next = NULL;
		temp->prev = NULL;
		temp->next = *stack;
		*stack = temp;
	}
}
