#include<stdio.h>
/**
 * main - print a sequence of numbers
 *
 * Return: Always (0);
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
		}
		if (i == 57 && j == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		j++;
	}
	i++;
	putchar('\n');
	return (0);
}
