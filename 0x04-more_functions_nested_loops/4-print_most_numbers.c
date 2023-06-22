#include "main.h"
/**
 * print_most_numbers - print th numbers 0 upto 9
 * Description: print the numbers excluding 2 and 4
 * Return: the numbers since 0 upto 9
 */
void print_most_numbers(void)
{
	itn x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	_putchar('\n');
	}
}
