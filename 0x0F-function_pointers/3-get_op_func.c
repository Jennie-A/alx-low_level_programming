#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - this file contain the correct
 * function to perform the operation asked by the user
 * @s: operator passed as argument
 * Return: NULL if none of the operators matches
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


{
	int i;

	while ((*ops[i].op) == *s)
	{
		(ops[i].op)
			return (ops[i].p);
			i++;
	}

	if (s != ops)
		return (NULL);
}
