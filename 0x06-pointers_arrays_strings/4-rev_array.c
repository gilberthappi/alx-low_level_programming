#include "main.h"
/**
  * reverse_array - a function that reverses an array of integers.
  * @a: the input array
  * @n: the number of the element of the array
  * Return: the reversed array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
