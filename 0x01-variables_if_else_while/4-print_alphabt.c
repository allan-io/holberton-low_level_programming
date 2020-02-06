#include <stdio.h>
/**
 * main - main function
 * Description: prints lowercase alphabet minus q and e
 * Return: 0
 */
int main(void)
{
	char *alphabet;
	int i;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (i < 26)
	{
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
			putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
