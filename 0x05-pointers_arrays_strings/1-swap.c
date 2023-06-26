#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: int pointer
 * @b: int pointer
 */

void swap_int(int *a, int *b)
{
	int temp1 = *a;

	*a = *b;
	*b = temp1;
}
