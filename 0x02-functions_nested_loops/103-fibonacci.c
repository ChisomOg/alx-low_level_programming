#include"main.h"

/**
 * main - Entry oint
 *
 * Description: prints the sum
 *
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float total;

	while (1)
	{
		sum = f1 + f2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
