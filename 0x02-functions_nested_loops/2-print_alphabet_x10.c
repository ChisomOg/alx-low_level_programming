#include  "main.h"

/**
 * pront_alphabet -functions that will print the alphabet 10 times
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
