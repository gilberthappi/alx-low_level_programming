#include <stdio.h>
/**
  * main - entry point
  * Description: would print all gidit of base 10 using putchar
  * Return: always zero
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
