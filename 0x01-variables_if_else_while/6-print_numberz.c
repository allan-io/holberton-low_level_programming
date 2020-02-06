#include <stdio.h>
/**
 * main - main function
 * Description: print 0-9 using putchar only twice
 * Return: 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
