#include "holberton.h"
/**
 * _strncpy - copies a string to another string by n chars
 * @dest:  where string will be copied to
 * @src: string that will be copied
 * @n: int that indicates how many chars will be copied from src
 * Return: pointer to new value of dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
