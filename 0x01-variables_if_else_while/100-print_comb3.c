#include <stdio.h>
/** 
 * main - entry for code
 *
 * Return: if 0 a success
 */

int main(void)
{
	int i;
	int j;
	int k = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 'k'; j <= '9'; j++)
		{
			if (i != j)
			{ 
				putchar(i);
				putchar(j);
			}
			if (i == j)
			{
				continue;
			}
			if (i == '8' && j == '9')
			{
				break;
			}
			else 
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
