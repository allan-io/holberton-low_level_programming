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
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
