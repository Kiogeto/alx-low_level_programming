#include <stdio.h>

/**
 * main - 3-print_alphabets.c
 * Description - program that displays uppercase and lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('A' + i);
	}
	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}

	return (0);

}
