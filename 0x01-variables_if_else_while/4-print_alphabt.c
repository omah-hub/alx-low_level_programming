#include <stdio.h>
/**
 * main-entry point
 *
 * Return:0 if successful
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putcahr(i);
	}
	putchar('\n');
	return (0);
}
