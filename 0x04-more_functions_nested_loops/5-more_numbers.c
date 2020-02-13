#include "holberton.h"
/**
 * more_numbers - prints numbers 0 - 14 ten times
 * Description: new line after each time
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j < 10)
			{
				_putchar(j + '0');
				j++;
			}
			else
			{
				_putchar('1');
				_putchar((j % 10) + '0');
				j++;
			}
		}
		i++;
		_putchar('\n');
	}
}
