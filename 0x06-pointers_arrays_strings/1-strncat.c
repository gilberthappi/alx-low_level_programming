#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: n bytes from the source string to be copied to destination string
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	for (j = 0; j < n; j++)
		dest[i] = '\0';
	return (dest);
}
