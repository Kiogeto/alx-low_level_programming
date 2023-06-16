#include <stdio.h>
/**
 * main - 6-print_numberz.c
 * Description -  single digit numbers of base 10 starting from 0
 *
 * Retutn: Always 0 (Success)
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
	if (digit != '4' && digit != '7')
	{
	putchar(digit);
	}
	}
	putchar('\n');

	return (0);

}
