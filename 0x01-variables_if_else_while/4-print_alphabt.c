#include <stdio.h>
/**
  * main - entry point
  * Description: would print all lowercases except q and e
  * Return: always zero
  */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
