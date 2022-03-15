#include "main.h"
/**
 * print_alphabet_x10 - print alphabet from a-z 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		i++;
	}
}
