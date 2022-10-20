#include"main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int hi, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hi = 1; hi <= size; ++hi)
		{
			for (base = 1; base <= size; ++base)
			{
				if ((hi + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
