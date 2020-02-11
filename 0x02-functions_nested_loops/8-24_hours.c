#include "holberton.h"
/**
 * jack_bauer - prints every minute from 00:00 - 23:59
 * Return: none
 */
void jack_bauer(void)
{
	int total_mins = 0, i = 0, j = 0, k = 0, l = 0;

	while (total_mins < 1440)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar('\n');
		l++;

		if (l > 9)
		{
			l = 0;
			k++;
		}
		if (k > 5)
		{
			k = 0;
			j++;
		}
		if (j > 9)
		{
			j = 0;
			i++;
		}
		total_mins++;
	}
}
