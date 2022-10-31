#incldue "main.h"

/**
 * _strchr - Returns a pointer to the first occurence
 *
 * @s: string targeted
 * @c: character targeted
 *
 * Return: returns pointer to c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && ([i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
