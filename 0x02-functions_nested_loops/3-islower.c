#include "main.h"

/** 
 * _islower - it checks for lowercase
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

