#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: The number of arguments supplied
 * @argv: An array of pointer
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
