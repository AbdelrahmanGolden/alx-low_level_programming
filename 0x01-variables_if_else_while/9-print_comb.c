#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 0)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar('');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
