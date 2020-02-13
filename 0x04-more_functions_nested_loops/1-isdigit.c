#include "holberton.h"
/**
 * _isdigit - checks if input is a digit
 * @c: int type variable that is checked
 * Return: 1  if is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
