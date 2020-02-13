#include "holberton.h"
/**
 * print_diagonal - draws a diagonal on the terminal
 * @n: number of times \ should be printed
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
