#include "main.h"

/**
 * print_chessboard - it prints a chessboard
 * @a: array containing board element
 * Returns: returns nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 0; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
