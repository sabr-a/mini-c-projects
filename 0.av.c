#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all args without using ac
 * @av: vector of arguments
 * @ac: arguments count
 * Return: 0
 */

int main(int ac, char **av)
{
	int i;

	for (i = 0; av[i]; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
