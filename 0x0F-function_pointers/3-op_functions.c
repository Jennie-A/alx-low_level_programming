#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - writes a function for sum
 * @a: first integer
 * @b: second integer
 * Return: sum of both integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - writes a function for sub
 * @a: first integer
 * @b: second integer
 * Return: sub of both integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - writes a function for multiple
 * @a: first integer
 * @b: second integer
 * Return: mul  both integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - writes a function for division
 * @a: first integer
 * @b: second integer
 * Return: divides both integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - writes a function for modulus
 * @a: first integer
 * @b: second integer
 * Return: remainder of both integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
