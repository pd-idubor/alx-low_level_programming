#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects correct operation
 *	for user specified operation
 * @s: operator passed as argument
 * Return: pointer to function corresponding
 *	to operatoe given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL && *ops[i].op != *s)
		i++;
	return (ops[i].f);
}
