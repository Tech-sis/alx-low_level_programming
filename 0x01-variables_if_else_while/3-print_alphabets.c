#include<stdio.h>
/**
 * main - print alphabets in lower and uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'a' && 'A'; alp <= 'z' && 'Z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
