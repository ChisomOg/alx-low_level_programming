#include "main.h"

/**
 * _memset - 
 *
 * @s: target
 * @b: constant byte
 * Return: returns value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
