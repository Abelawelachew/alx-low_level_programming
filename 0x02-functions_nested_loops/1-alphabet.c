#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int n, i;

	i = 0;

	while (i < 10)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	i++;
	_putchar('\n');
}
