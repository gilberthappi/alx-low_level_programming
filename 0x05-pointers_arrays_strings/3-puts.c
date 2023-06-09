#include "main.h"
/**
  * _puts - a function that prints a string, followed by a new line, to stdout.
  * @str: input string
  * return: string @str followed by newline
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
