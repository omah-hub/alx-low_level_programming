#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: If the program receives two argument - 0
 *	If the program does not receive two argument - 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
