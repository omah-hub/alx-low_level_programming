#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 if successful
 */
  int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
