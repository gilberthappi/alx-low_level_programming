#include <stdio.h>
/**
  * main - entry point
  * Description: prints the lowercase alphabet in reverse.
  * Return: always zero
  */
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
