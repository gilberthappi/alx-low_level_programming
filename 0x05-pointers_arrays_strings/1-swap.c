#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: input interger to swap
 * @b: input interger to swap
 * Return swapt @a and @b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
