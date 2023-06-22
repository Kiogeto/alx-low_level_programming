#include "main.h"
/**
 * main - check if a character is a digit
 * @c: the number to be checked
 *
 * Return: 1 if it is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
