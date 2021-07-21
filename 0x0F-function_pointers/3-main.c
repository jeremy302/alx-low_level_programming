#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - applies a mathematical operation on 2 numbers
 * @argc: agument count
 * @argv: arguments
 *
 * Return: 0 if successful, else 98
 */
int main(int argc, char *argv[])
{
	int arg_1, arg_2, (*func)(int, int);
	char *op;

	if (argc != 4)
		return (printf("Error\n"), 98);

	arg_1 = atoi(argv[1]), op = argv[2], arg_2 = atoi(argv[3]);
	if ((*op == '/' || *op == '%') && arg_2 == 0)
		return (printf("Error\n"), 100);
	func = get_op_func(op);
	if (func == NULL)
		return (printf("Error\n"), 99);
	printf("%d\n", func(arg_1, arg_2));
	return (0);
}
