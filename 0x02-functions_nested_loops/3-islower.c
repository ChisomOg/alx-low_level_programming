#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints low alphabet
 *
 * Return: return 1 if 'c' is a lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

