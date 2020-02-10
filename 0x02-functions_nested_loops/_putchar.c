#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 * @c: Character that will be printed by the function
 * Return: 1 on success -1 on error
 * Would be an error if @c is larger than 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
