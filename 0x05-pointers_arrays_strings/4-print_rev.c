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
	int len, i;

	len = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len = i;
	}
	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
