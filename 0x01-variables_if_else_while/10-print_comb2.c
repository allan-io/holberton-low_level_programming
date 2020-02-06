#include <stdio.h>
/**
 * main - main function
 * Description: prints numbers from 00 - 99 only putchar allowed
 * numbers are separated by comma and space except number 99
 * only used putchar 5 times and no char type used
 * Return:0
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	j = 48;
	while (i < 58)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i == 57 && j == 57)
				break;
			putchar(44);
			putchar(32);
			j++;
		}
		j = 48;
		i++;
	}
	putchar('\n');
	return (0);
}
