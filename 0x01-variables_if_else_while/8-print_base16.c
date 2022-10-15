#include <stdio.h>
/**
 * main - entry for code
 *
 * Return: return 0 if correct
 */

int main(void)
{
	int i;
	char hexvalue[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalue[i]);
	}
	putchar('\n');
	return (0);
}
