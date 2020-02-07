#include <stdio.h>
/**
 * main - main function
 * Description: print the alphabet in reverse using putchar
 * Return: 0
 */
int main(void)
{
	char *alphabet;
	int i;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	i = 25;
	while (i >= 0)
	{
		putchar(alphabet[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
