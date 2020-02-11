#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * @i: integer type number
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		int abs = ((i % 10) * -1);

		_putchar(abs + '0');
		return (abs);
	}
	else
	{
		_putchar((i % 10) + '0');
		return (i % 10);
	}
}
