#include "main.h"
/**
 * print_last_digit - Prints and returns the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;
	a = n % 10;

	if (a < 0)
	a = -a;

	_putchar(a + '0');

	return (a);

}
