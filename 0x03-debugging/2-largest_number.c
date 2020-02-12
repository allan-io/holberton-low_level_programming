#include "holberton.h"
/**
 * largest_number - return the large of 3 nums
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int large;

	if (a >= b && a >= c)
	{
		large = a;
	}
	else if (b >= a && b >= c)
	{
		large = b;
	}
	else
	{
		large = c;
	}

	return (large);
}
