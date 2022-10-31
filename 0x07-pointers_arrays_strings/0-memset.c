#include "main.h"

/**
 * _memset - helps to fulfill the function
 *
 * @s: target
 * @b: constant byte
 * Return: returns value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
