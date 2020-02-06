#include <stdio.h>
/**
 * main - main function
 * Description: print 0123456789abcdef using only printchar max 3 times
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
