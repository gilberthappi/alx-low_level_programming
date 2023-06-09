#include <stdio.h>
/**
  * main - entry point
  * Description: would print all lowercases and uppercases alphabets
  * Return: always zero.
  */
int main(void)
{
	int i;
	int j;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	j = 65;
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
