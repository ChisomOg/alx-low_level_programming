#include"main.h"

/**
 *main - Entry point
 * 
 *Description: prints alphabet
 *
 * Return: 0 always success
 */

void print_alphabet(void)

{
	int ch;

		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
}
