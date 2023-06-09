#include <stdio.h>
/**
  * main - entry point
  * Description: prints all possible different combinations of three digits.
  * Return: always zero.
  */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if ((i != j && i != k) || (j != k))
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if ((i == 7 && j == 8) && (k == 9))
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
