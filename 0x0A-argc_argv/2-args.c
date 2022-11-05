#include <stdio.h>

/**
 * main - prints all argument
 * @argc: The number of argument
 * @argv: An array of pointers to argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
