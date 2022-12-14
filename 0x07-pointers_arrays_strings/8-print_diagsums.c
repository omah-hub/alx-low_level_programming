#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of two diagonals
 * of a square matrix
 * @a: 2D array
 * @size: size x size of square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int t1 = 0;
	int tr = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		t1 += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		tr += a[i];
	}

	printf("%d, %d\n", t1, tr);
}
