#include <stdio.h>
/**
 * main - main function
 * Description: print 1-9 with comma and space between each number
 * only use putchar and maximum of 4 times
 * no comma or space after the 9
 * Return: 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	i++;
	}
	putchar('\n');
	return (0);
}
