#include "main.h"
/**
 * main - 1-alphabet.c
 * Description - alphabet, in lowercase, followed by a new line.
 *
 *Return: 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{

	_putchar(letter);
	letter++;
	}

	_putchar('\n')
}
