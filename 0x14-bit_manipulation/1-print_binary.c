#include "main.h"
#include <stdio.h>

/**
 * print_binary -  function that prints the binary representation of a number
 * @n: unsigned int
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1) /*base case to print the binary digits of input number n*/
	{
		print_binary(n >> 1); /*shift input number to the right by 1*/
	}
	putchar((n & 1) ? '1' : '0'); /*print using bitwise operator &,1 or 0*/
}
