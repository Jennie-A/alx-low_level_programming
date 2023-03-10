#include "main.h"

/**
 * _isalpha - this program write a function for alphabtic character
 * @c: the char to be checked
 * Return: 1 if c is lower or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
