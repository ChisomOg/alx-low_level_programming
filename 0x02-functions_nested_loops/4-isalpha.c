#include "main.h"

/**
 * _isalpha - for lower and higher case
 *
 * @c: the int value
 *
 * Return: return 0 if successful
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
		return (1);
	return (0);
}
