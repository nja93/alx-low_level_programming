#include "main.h"

/**
 * swap_int  - function to swap integers a and b
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
