#include <stdio.h>
/**
 * main - 4-print_alphabt.c
 * Description -  prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = '0'; letter <= 'z'; letter++)
	{
	if (letter != 'q' && letter != 'e')
	{
	putchar(letter);
	}
	}

	putchar('\n');


	return (0);
}
