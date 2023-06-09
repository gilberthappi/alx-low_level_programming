#include <stdio.h>
/**
  * main - entry point
  * Description: would print all lowercases alphabets
  * Return: always zero.
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
