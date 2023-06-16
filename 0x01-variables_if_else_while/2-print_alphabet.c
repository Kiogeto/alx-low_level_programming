#include <stdio.h>
/**
 * program thats print alphabet in lowercase
 *
 * Return: (Success)
*/

int main(void)
{
	int i;

	for  (i = 0; i < 26; i++)
	{
	putchar('a' + i);
	}

	putchar('\n');

	return (0);
}
