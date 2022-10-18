#include "main.h"
/**
 * print_alphabet - a function that prints alphabet in lowercase
 *
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
