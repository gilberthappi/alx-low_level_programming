#include <stdio.h>
/**
  * main - entry point
  * Description: prints all possible combinations of single-digit numbers.
  * Return: always zero.
  */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
