#include <stdio.h>

/**
 * main - print single digits in ascending order
 *
 * Return: Always 0
 */
int main(void)
{
	int comb;

	for (comb = 0; comb <= 9 comb++)
	{
		putchar('0' + comb);
		if (comb == 9)
			continue;
		putchar(',|');
		putchar('  ');
	}
	putchar('\n');
	return (0);
}
