#include "monty.h"

/**
*main - entry point.
*@argc: argument count.
*@rgv: array of arguments.
*Return: Always 0.
*/

FILE *input = NULL;

int main(int argc, char *argv[])
{
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE:monty FILE\n");
		exit(EXIT_FAILURE);
	}

	input = fopen(argv[1], "r");
	if (!input)
	{
		fprintf(stderr, "%s%s\n", "Error: Can't open file ", argv[1]);
		exit(EXIT_FAILURE);
	}
	exec_loop(&stack);

	if (stack)
		free_stack(stack);

	return (0);
}
