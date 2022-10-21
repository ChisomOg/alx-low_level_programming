#include"main.h"
/**
 * main - print number 1 - 100
 *
 * Description: multiples between 0 and 100
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 99; ++num)
	{
		if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
		       	printf("Buzz");
		else if (num % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	printf("Buzz\n");
	return (0);
}
