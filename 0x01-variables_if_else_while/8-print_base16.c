#include <stdio.h>
/**
  * main - entry point
  * Description: prints all the numbers of base 16 in lowercase.
  * Return: always zero.
  */
int main(void)
{
	int i;
	int j;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	j = 97;
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
