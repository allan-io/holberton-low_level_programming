#include "holberton.h"
/**
 * puts_half - prints out half of the given string
 * @str: value of string passed into function
 */
void puts_half(char *str)
{
	int length = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length - 1) / 2; i < length; i++)
		{
			if (length - 1 == 0)
			{
				_putchar('\n');
				return;
			}
			else
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
