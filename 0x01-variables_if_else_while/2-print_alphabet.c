#include <stdio.h>
/**
 * main - main function
 * Description: print alphabet in lowercase using putchar
 * Return: 0
 */
int main(void)
{
	int i;
	char *alphabet;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
