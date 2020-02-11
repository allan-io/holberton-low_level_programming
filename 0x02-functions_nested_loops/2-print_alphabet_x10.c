#include "holberton.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times
 * Description: alphabet is in lowercase and new line after each instance
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0, c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
