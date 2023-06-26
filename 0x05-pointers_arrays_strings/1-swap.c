#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of 2 integers
 * @a: check integer
 * @b: check integer
 */

void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
