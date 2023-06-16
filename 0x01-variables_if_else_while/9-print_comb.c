#include <stdio.h>
/**
 * main - 9-print_comb.c
 * Description - all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	putchar('0');

	for (int i = 1; i < 10; i++)
	{
	putchar(' ');
	putchar(',');
	putchar('0' + i);

	}
	putchar('\n');

	return (0);

}


