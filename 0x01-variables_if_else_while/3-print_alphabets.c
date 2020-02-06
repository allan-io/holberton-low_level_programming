#include <stdio.h>
/**
 * main - main function
 * Description: prints the alphabet in lowercase and uppercase
 * only uses putchar and a maximum of 3 times
 * Return: 0
 */
int main(void)
{
	char *lower_alpha;
	char *upper_alpha;
	int i;

	lower_alpha = "abcdefghijklmnopqrstuvwxyz";
	upper_alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	while (i < 26)
	{
		putchar(lower_alpha[i]);
		i++;
	}
	i = 0;
	while (i < 26)
	{
		putchar(upper_alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
