#include "main.h"

/**
 * puts_half - puts half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i = _strlen(str);

	if (i % 2 == 1)
	{
		i = (i + 1) / 2;
	}
	else
	{
		i = (i / 2);
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

/**
 * _strlen - returns the length of string
 * @s: string
 * Return: returns length
 */

int _strlen(char *s)
{
	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
