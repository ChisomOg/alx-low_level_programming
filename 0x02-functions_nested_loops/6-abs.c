#include "main.h"

/**
 * _abs - it prints absolute value
 *
 * @n: takes in integer
 *
 * Return: Always 0 (success
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
