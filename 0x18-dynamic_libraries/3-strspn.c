#include "main.h"
/**
 * _strspn - Gets the length
 * @s: The string to be searched
 * @accept: The prefix to be measured
 *
 * Return: The number of bytes in s which
 *	   consist only ofbytes
 *
 *	   PSEUDOCODE
 *	   Loop through s and compare s[i] to value in accept
 *	   increase bytes counter when values in accept can be found
 *	   in s
 *	   end loop and return bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}
