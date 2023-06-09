#include <stdio.h>
/**
  * main - entry point
  * Description: prints all possible different combinations of two digits.
  * Return: always zero
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i != j)
			{
			putchar(i + 48);
			putchar(j + 48);
			if (i == 8 && j == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
