#include "main.h"

/**
 * _strcat - com=ncatonate two strings
 * @dest: first input string
 * @src: second input
 *
 * Description: appends the string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
