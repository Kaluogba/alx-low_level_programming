#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char k[] = "_putchar";

	int i = 0;

	while (k[i] <= 8)
	{
		_putchar(k[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
