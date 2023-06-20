#include "main.h"

/**
 * print_sign - prints + if n > 0 , 0 if n = 0, if - n < 0
 *
 * @n: takes an integer n type for function
 *
 * Return: 1 if n +, 0 if n 0, -1 if n -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);

	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
