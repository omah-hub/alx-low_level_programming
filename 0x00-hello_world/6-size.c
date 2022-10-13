#include <stdio.h>
/**
 * main-entry point
 *
 * Return:zero if no error,non-zero if errors
 */
int main(void)
{
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Siize of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
