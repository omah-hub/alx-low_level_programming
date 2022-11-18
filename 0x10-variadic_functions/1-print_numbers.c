#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers &new line at the end
 * @seperator: string
 * @n: number of elements
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (seperator != NULL && i != (n - 1))
		{
			printf("%s", seperator);
		}
	}
	putchar('\n');
	va_end(ap);
}
