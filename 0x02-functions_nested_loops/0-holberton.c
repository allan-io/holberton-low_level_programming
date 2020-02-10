#include "holberton.h"
/**
 * main - print Holberton followed by new line
 * Return: 0
 */
int main(void)
{
	char *word = "Holberton";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
