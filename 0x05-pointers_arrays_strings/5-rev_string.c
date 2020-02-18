#include "holberton.h"
/**
 * rev_string - changes the value of a string to its reverse value
 * @s: string to be modified
 */
void rev_string(char *s)
{
	int i, sub, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length = i;
	}
	for (i = 0; i < length; i++, length--)
	{
		sub = s[length];
		s[length] = s[i];
		s[i] = sub;
	}
}
