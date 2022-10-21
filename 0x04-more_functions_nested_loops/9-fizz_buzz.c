#include"main.h"
/**
 * main - print number for buzz and fizz
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
		       	printf("Buzz ");
		else if (num % 15 == 0)
			printf("FizzBuzz ");
		else
			printf("%i ", num);
	}
	printf("Buzz\n");
	return (0);
}
