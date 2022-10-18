#include "main.h"

/**
 * print_sign - print + if n is greater than zero
 *
 * @n: takes int
 *
 * Return: return 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
