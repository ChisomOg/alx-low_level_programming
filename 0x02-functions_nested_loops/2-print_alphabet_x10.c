#include  "main.h"

/**
 * main - entry for value
 *
 * Description: print alphabet 10 times
 *
 * Return: 0 if success
 *
 */

void print_alphabet_x10(void)
{
	int l, ch;

	for (l = 0; l <= 9; ++l)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
