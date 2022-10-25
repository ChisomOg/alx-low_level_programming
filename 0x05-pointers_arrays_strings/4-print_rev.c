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
	int len, i, left;

	len = 0;
	left = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len = i;
	}
	for (len >= left; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
