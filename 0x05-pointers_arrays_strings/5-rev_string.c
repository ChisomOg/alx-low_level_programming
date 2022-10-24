#include "main.h"

/**
 * rev_string - it reverss a string
 * @s: is the string
 *
 * Description: reverses a string
 * Return: return 0
 */

void rev_string(char *s)
{
	int st, i, le;

	le = 0;
	i = 0;

	while (s[i] != '\0')
	{
		i++
	}
	i--;
	while (i > le)
	{
		st = s[i];
		s[i--] = s[le];
		s[le++] = st;
	}
}
