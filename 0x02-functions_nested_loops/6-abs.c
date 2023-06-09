#include "main.h"
/**
  * _abs - a function that computes the absolute value of an integer.
  * @n: an integer to return it's value;
  * Return: always psitive n.
  */
int _abs(int n)
{
	if (n < 0)
		return (-(n));
	else
		return (n);
}
