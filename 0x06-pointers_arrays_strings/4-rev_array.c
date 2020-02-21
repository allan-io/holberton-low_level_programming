#include "holberton.h"
/**
 * reverse_array - reverses order of ints in an array
 * @a: array of integers
 * @n: number of elements in array a
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
