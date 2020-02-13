#include "holberton.h"
/**
 * print_square - prints a square out of #s in the terminal
 * @size: size of each side of square
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
