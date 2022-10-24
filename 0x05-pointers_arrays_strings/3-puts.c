#include "main.h"
/**
 * _puts - it prints a line
 * @str: a string
 * Return: returns 0 if success
 */

void _puts(char *str);
{
	while (*str)
		_putchar(*str);

	_putchar('\n');
}
