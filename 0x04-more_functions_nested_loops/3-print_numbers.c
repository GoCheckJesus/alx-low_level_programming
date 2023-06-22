#include "main.h"

/**
 * print_numbers - print from 1 to 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
		_putchar('\n');
	}
}
