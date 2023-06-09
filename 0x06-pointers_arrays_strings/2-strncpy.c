#include "main.h"
/**
  * _strncpy - a function that copies a string
  * @dest: destination string
  * @src: source string
  * @n: number of bytes to be copied from @src to @dest
  * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
