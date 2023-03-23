#include "monty.h"

/**
*free_stack - frees a whole stack.
*@stack: stack to free.
*Return: None.
*/

void free_stack(stack_t *stack)
{
	stack_t *temp = stack;
	int i = 0;

	while (stack)
	{
		stack = stack->next;
		free(temp);
		temp = stack;
		i++;
	}
}
