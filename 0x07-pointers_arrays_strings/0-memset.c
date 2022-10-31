#include "main.h"

/**
 * _memset - it fills the byte
 *
 * @s: target
 * @b: constant byte
 * Return: returns value of target
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;		
		n--;
	}
	return (s);
}
