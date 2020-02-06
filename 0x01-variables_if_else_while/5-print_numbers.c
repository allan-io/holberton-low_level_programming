#include <stdio.h>
/**
 * main - main function
 * Description: print all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
