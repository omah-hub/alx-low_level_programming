#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
