#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - returns a pointer to the function
 * that corresponds to the operator given as a parameter.
 * @s: char pointer
 * Return: result
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return ((ops[i].f));
		}
		i++;
	}
	return (NULL);
}
