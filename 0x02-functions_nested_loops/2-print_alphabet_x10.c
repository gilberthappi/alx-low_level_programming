#include "main.h"
/**
  * print_alphabet_x10 - function that prints 10 times the alphabet,
  * Return: nothing
  */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
