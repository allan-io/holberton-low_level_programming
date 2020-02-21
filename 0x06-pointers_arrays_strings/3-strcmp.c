#include "holberton.h"
/**
 * _strcmp - compares two strings for equality
 * @s1: string variable
 * @s2: string variable
 * Return: negative int if s1 < s2, poritive if s1 > s2, 0 if same
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
