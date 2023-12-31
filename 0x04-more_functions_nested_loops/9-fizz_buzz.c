#include "main.h"
#include <stdio.h>

/**
 * main - prints number from 1 to 100
 * replace with Fizz if its divisible by 3
 * replace with Buzz if its divisible by 5
 * and replace with FizzBuzz if its divisible by both 3 and 5
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
