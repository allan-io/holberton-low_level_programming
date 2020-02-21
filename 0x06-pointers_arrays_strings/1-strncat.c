#include "holberton.h"
/**
 * _strncat - concatenates n number of char from src to dest
 * @dest: string that will be concatenated into
 * @src: string that will be appended to dest
 * @n: int variable that will determine how many chars will be added to dest
 * Return: pointer to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
		;
	for (j = 0; src[i] != 0 && n > 0; j++, i++, n--)
		dest[i] = src[i];

	return (dest);
}
