#include "main.h"

/**
 * print_alphabet - utilizes on _putchar function to print alphabet from a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		_putchar(ch);
	_putchar('\n');
}
