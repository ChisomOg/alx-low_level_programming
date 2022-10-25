#include "main.h"

/**
 * puts2 - puts every character
 *@str: strings to print
 *
 * Description: prints every charcarter of the string
 * Return: returns 0 if success
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
