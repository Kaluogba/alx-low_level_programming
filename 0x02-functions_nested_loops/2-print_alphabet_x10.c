#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints alphabet ten times.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int b = 1;

	while (b <= 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
