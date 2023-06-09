#include <stdio.h>
/**
  * main - entry point
  * Description: would print all base 10 digits
  * Return: always zero
  */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
