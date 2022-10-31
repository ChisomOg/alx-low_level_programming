#include "main.h"

/**
 * _strpbrk - it locates the occurence in the string s of byes
 *
 * @s: string where search is made
 * @accept: search is located
 *
 * Return: Returns a pointer to the byte in s that matvhes
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (acceptr[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
