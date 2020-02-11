#include "holberton.h"
/**
 * jack_bauer - prints every minute from 00:00 - 23:59
 * Return: none
 */
void jack_bauer(void)
{
	int i = 0, j, k, l;

	while (i < 3)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					/* program will end if time reads 23:59 */
					if (i + j + k + l == 19)
						break;
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
