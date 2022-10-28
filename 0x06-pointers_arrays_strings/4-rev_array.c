#include "main.h"

/**
 * reverse_array - function that reverses array
 * @a: array
 * @n: number of elements
 *
 * Description: reverses the array and prints it
 * Return: returns the reverse value
 */

void reverse_array(int *a, int n)
{
	int tmp, left, right;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
