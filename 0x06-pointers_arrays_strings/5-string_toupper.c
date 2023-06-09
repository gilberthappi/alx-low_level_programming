#include "main.h"
/**
  * string_toupper - a function that changes lowercase to uppercase letter.
  * @str: input string
  * Return: uppercase letters of @str
  */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
