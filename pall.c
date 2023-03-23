#include "monty.h"

/**
*pall - print all items in the stack.
*@stack: the stack to push to.
*@line_number: the line number.
*Return: None.
*/

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!temp)
		;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
