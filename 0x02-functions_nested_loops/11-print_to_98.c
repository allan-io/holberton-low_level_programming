#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 * @num: integer type number used as a starting point
 * Return: none
 */
void print_to_98(int num)
{
	if (num < 98)
	{
		while (num <= 98)
		{
			printf("%d", num);
			if (num != 98)
				printf(", ");
			num++;
		}
	}
	else if (num > 98)
	{
		while (num >= 98)
		{
			printf("%d", num);
			if (num != 98)
				printf(", ");
			num--;
		}
	}
	else
	{
		printf("%d", 98);
	}
	putchar('\n');
}
