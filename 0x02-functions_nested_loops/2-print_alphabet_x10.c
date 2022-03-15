#include "main.h"
/**
 * print_alphabet_x10 - print alphabet from a-z 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a = 0;

	while (a <= 10)
	{
		char b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
