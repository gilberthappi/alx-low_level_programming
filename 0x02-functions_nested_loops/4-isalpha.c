#include "main.h"
/**
  * _isalpha - a function that checks for alphabetic character.
  * @c: an integer to store the characters
  * Return: 1 amd 0;
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
