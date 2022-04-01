#include <stdio.h>
/**
 * main - prints the number of arguments in a program
 * @argc: count number of arguments
 * @argv: pointer to array of strings
 * Return: 0
 */

int main(int argc, char *argv[] __attribut__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
