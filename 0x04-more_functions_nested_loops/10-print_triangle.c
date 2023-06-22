#include "main.h"

/**
 * print_triangle - print a triangle using #, followed by a new line
 * @size: check integer
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = size; i >= 0; i--)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			for (k = i; k <= size ; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
