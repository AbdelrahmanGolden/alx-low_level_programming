#include "main.h"

/**
 * more_numbers - papapap
 *
 * Return: always 0
*/

void more_numbers(void)
{
	int n, r, c;

	for (r = 1; r <= 10; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			n = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				n = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
