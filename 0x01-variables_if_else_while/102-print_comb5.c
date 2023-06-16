#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - 102-print_comb5.c
 * Description - combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
	for (b = 0; b <= 99; b++)
	{
	if (a <= b)
	continue;

	putchar('0' + a / 10);
	putchar('0' + a % 10);
	putchar(' ');
	putchar('0' + b / 10);
	putchar('0' + b % 10);

	if (a != 98 || b != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
