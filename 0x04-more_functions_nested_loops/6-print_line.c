#include "holberton.h"
/**
 * print_line - prints "_" n number of times
 * @n: number of times to print "_" int type
 */
void print_line(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
