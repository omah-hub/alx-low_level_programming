#include <stdio.h>

/**
 * main-entry point
 * return: 0 if successful
 * */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
