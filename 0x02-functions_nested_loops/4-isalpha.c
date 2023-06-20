#include "main.h"
/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
