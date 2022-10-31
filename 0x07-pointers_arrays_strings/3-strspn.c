#include "main.h"

/***
 * _strspn - search the no of bytes in the s
 *
 * @s: segment targeted
 * @accept:reference bytes container
 *
 * Return: returns the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}

