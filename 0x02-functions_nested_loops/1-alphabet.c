#include "holberton.h"
/**
 * print_alphabet - prints a to z
 * Description: use only _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
