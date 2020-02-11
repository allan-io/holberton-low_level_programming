#include "holberton.h"
/**
 * _abs - computes absolute value of a integer
 * @i: integer type number
 * Return: i if number is greater than zero (i * -1) otherwise
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
