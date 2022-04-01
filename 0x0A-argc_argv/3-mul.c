#include <stdio.h>
/**
 * main - multiply numbers
 * @argc: number of arguments
 * @argv: pointer to array of numbers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 0;

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
