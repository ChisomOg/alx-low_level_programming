#include"main.h"

/**
 *main - Print number for buzz and fizz
 *
 *Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
