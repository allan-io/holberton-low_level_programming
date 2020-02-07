#include <stdio.h>
/**
 * main - main function
 * Description: prints all unique combinations of two base 10 digits
 * using only putchar maximum of 5 time
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	while (i < 58)
	{
		j = i + 1;
		while (j > i && j < 58)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(44);
			putchar(32);
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
