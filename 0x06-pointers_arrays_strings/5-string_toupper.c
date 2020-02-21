#include "holberton.h"
/**
 * string_toupper - Replace lowecase chars to uppercase
 * @c: string to be modified
 * Return: new value of c variable
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;
	}
	return (c);
}
