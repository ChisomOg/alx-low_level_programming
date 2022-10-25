#include "main.h"

/**
 * print_rev - prints in reverse
 *@s: s prints he string
 *
 *Description: prints the value in reverse
 *Return: Always 0
 */

void print_rev(char *s)
{
	int len = 0, i, left;

	len = _strlen(s);
	left = 0;
	for (i = len -1; len >= left; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns length;
 */

int _strlen(char *s)
{
	int count, inc;
	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
