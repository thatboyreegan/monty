#include "monty.h"

void (*get_opcode(char *opcode))(stack_t **, unsigned int)
{

	instruction_t opcodes[] = {
		{"push", &push},
		{"pall", &pall},
		{"pint", &pint},
		{"pop", &pop},
		{"swap", &swap},
		{"add", &add},
		{"sub", &sub},
		{"mul", &mul},
		{"div", &_div},
		{"mod", &mod},
		{"pchar", &pchar},
		{"pstr", &pstr},
		{"rotl", &rotl},
		{"nop", &nop},
		{"rotr", &rotr},
		{"\0", NULL},
	};

	int i = 0;

	while (opcodes[i].f != NULL)
	{
		if (strcmp(opcodes[i].opcode, opcode) == 0)
			return (opcodes[i].f);
		i++;
	}
	return (NULL);
}
