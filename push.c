#include "monty.h"

int check_integer(char *str);

/**
 * push - add an  item to the top of the stack.
 *
 * @stack: Pointer to the address of the top of the stack.
 * @line_number: Number of the line being executed.
*/
void push(stack_t **stack, unsigned int line_number)
{
	char data_str[20] = {0};
	stack_t  *new_item;

	fscanf(input, "%19s", data_str);
	if (check_integer(data_str) == -1)
	{
		fprintf(stderr, "%s%u%s", "L", line_number, ": usage: push integer\n");
		if (*stack)
			free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	new_item = malloc(sizeof(stack_t));
	if (!new_item)
	{
		if (*stack)
			free_stack(*stack);
		fprintf(stderr, "%s", "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_item->n = atoi(data_str);
	new_item->prev = NULL;

	if (*stack)
	{
		(*stack)->prev = new_item;
		new_item->next = *stack;
	}
	else
	{
		new_item->next = NULL;
	}
	*stack = new_item;
}

/**
*check_integer - checks if its an integer.
*@str: the string.
*Return: integer
*/

int check_integer(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != ' ')
	{
		if (i == 0)
		{
			if (str[i] != '-' && str[i] != '+' && !isdigit(str[i]))
				return (-1);
		}
		else
		{
			if (!isdigit(str[i]))
				return (-1);
		}
		i++;
	}
	return (0);
}
