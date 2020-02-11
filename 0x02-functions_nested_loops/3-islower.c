#include "holberton.h"
/**
 * _islower - checks case of a character
 * @c: character data type
 * Return: 1 if c is lowercase, 0 if c not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
