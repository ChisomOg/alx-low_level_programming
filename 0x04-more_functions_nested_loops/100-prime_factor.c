#include<stdio.h>

/**
 * _sqrt - find the root
 *
 * @x: input number
 *
 * Return: square root of x
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints prime factor
 *
 * @num: number to find
 */

void largest_prime_factor(long int num)
{
	int prm, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prm = 3; prm <= _sqrt(num); prm += 2)
	{
		while (num % prm == 0)
		{
			num = num / prm;
			largest = prm;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - entry point
 *
 * Retur: Always 0
 */

int main(void)
{

	largest_prime_factor(612852475143);

	return (0);
}
