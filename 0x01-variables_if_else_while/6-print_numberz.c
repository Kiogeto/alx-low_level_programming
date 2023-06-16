#include <stdio.h>
/**
 * main - 6-print_numberz.c
 * Description -  single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
	putchar('0' + i);
	}
	putchar('\n');


	return (0);
}
