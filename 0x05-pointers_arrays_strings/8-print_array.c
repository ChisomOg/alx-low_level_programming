#include "main.h"

/**
 * print_array - prints the array
 *@a: first value
 *@n: number of elements in the array
 *
 * Return: 0 if success
 */

void print_array(int *a, int n)
{
	int in;

	for (in = 0; in < n; in++)
	{
		if (in != n - 1)
			printf("%d, ", a[in]);
		else
			printf("%d", a[in]);
	}
	printf("\n");
}
