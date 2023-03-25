#include "monty.h"

/**
*pstr - print all items of a stack as a string.
*@stack: the stack to.
*@line_number: the line number.
*Return: None.
*/

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!*stack)
		printf("\n");


	while (temp)
	{
		if (temp->n <= 0 || temp->n > 127)
			break;
		putchar(temp->n);
		temp = temp->next;
	}
	puts("");
	UNUSED(line_number);
}
