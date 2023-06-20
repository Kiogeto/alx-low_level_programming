#include <unistd.h>
/**
 * main - 0-putchar.c
 * Description - Write a program that prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar\n";

	write(1, c, sizeof(0) - 1);

	return (0);
}
