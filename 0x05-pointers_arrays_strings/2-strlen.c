#include "holberton.h"
/**
 * _strlen - returns length of given string
 * @*s: string variable (pointer to first character in array)
 * Return: string characters count;
 */
int _strlen(char *s)
{
	int count = 0, i = 0;
	
	while(i != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
