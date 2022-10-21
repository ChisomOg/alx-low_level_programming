#include"main.h"
/**
 * main - print number for buzz and fizz
 *
 * Return: always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 99; ++num)
	{
		if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
		       	printf("Buzz ");
		else if (num % 15 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", num);
	}
	printf("Buzz\n");
	return (0);
}
