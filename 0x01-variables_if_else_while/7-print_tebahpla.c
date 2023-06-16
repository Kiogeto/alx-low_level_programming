#include <stdio.h>
/**
 * main - 7-print_tebahpla.c
 * Description - lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;


	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
		putchar('\n');

		return (0);

}
