#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - 100-print_comb3.c
 * Description -  possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
	putchar(',');
	putchar(' ');
	putchar('0' + d);
	putchar('0' + p);
	}
	}

	putchar('\n');

	return (0);

}
