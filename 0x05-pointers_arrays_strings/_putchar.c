#include <unistd.h>

/**
 * _putchar - writes
 *
 * @c: the character to print
 *
 * Return: 0 on success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
