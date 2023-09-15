#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: operator passed as arguement
 * Return: a pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"_", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int p = 0;

	while (ops[p].op != NULL && *(ops[p].op) != *s)
		p++;
	return (ops[p].f);
}

