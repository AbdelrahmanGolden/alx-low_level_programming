#include "main.h"

/**
 * print_square - abc * abc
 *
 * @size: input
 *
 * Return: always 0
*/

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
