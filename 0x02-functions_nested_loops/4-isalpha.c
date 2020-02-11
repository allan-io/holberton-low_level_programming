#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * Description: either lowercase or uppercase
 * @c: char type letter
 * Return: 1 if char is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
