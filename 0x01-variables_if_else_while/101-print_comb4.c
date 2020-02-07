#include <stdio.h>
/**
 * main - main function
 * Description: prints all possible unique combinations of 3 digits
 * only uses putchar and a maximum six time
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 48;
	while (i < 58)
	{
		j = i + 1;
		while (j > i && j < 58)
		{
			k = j + 1;
			while (k > i && k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				putchar(44);
				putchar(32);
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
