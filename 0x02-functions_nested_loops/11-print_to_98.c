#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all the natural numbers from n yo 98
 * @n: the number to start printing from
 * Return: A lways 0
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
	if (i != 98)
	printf("%d, ", i);
	else if (i == 98)
	printf("%d\n", i);
	}
	}
	else if (n >= 98)
	{
	for (j = n; j >= 98; j--)
	{
	if (j != 98)
	printf("%d, ", j);
	else if (j == 98)
	printf("%d\n", j);
	}
	}
}
