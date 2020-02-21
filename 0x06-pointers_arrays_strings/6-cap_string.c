#include "holberton.h"
/**
 * cap_string - capitalize all words of a string
 * @str: string to be modified
 * Return: modified str variable
 */
char *cap_string(char *str)
{
	int i, j, cap_flag
	char separators[] = ",;.!?(){}\n\t\" ";

	for (i = 0, cap_flag = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			cap_flag = 1;
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (separators[j] == str[i])
				cap_flag = 1;
		}
		if (cap_flag)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				cap_flag = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				cap_flag = 0;
			else if (str[i] > 47 && str[i] < 58)
				cap_flag = 0;
		}
	}
	return (str);
}
