#include <stdio.h>
/**
 * main - 5-print_numbers.c
 * Description - numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
	}
	putchar('\n');

	return (0);

}


