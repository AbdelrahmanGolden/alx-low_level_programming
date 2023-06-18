#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all alphabet except q and e
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (char <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);

}
