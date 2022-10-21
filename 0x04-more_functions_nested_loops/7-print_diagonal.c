#include "main.h"
/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times
 *
 * Description: draws a diagonal line
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int postn = 0, space;

	if (n > 0)
	{
		while (postn < n)
		{
			for (space = 0; space <= postn; ++space)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			++postn;
		}
	}
	else
	{
		_putchar('\n');
	}
}
