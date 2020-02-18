#include "holberton.c"
/**
 * swap_int - function that swaps values of two ints
 * @a: pointer to int variable
 * @b: pointer to int variable
 */
void swap_int(int *a, int *b)
{
	int valA = *a;
	*a = *b;
	*b = valA;
}
