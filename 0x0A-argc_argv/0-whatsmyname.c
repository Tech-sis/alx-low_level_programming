#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: counter to number of arguments
 * @argv: pointer to array of strings
 * Return: 0
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
