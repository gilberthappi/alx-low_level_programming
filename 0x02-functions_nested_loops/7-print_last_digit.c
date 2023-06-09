#include "main.h"
/**
  * print_last_digit - a function that prints the last digit of a number.
  * @n: number containing last digit
  * Return: always last digit
  */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld = -ld;
		_putchar(ld + 48);
		return (ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
