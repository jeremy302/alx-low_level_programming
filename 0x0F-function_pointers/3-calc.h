#ifndef CALC_HEADER
#define CALC_HEADER

#ifndef NULL
#define NULL ((void *)0)
#endif

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct Operation
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif