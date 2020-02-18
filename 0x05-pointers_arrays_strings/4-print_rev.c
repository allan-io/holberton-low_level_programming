#include "holberton.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = length; i <= 0; i--)
	{
		_putchar(s[i]);
	}
}
