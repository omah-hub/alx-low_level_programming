#include "main.h"
/**
 * _strstr - a function that locates s substring
 * @haystack: locate a substring
 * @needle: substring to locate
 *
 * Return: pointer to the beginning
 * or NULL, if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h =  haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
