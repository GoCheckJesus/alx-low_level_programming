#include "main.h"

/**
 * more_numbers - print 10 times from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	char i;

	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
