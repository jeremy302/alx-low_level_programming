#include "3-calc.h"

/**
 * get_op_func - gets the operation specified by `s`
 * @s: a character that represents the mathematical operation
 *
 * Return: the operation's function
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

	i = -1;
	while (ops[++i].op != NULL)
		if (*ops[i].op == *s)
			return (ops[i].f);
	return (NULL);
}
