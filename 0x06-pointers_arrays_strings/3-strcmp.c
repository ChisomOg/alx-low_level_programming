#include "main.h"

/**
 * _strcmp - it compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 == s2, -ve if s1 < s2 and +ve if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = s1[i] - s2[i];
		}
		i++
	}

	return (diff);
}
