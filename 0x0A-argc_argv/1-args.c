#include "main.h"
#include <stdio.h>

/**
 * main -  prints number of argumets
 * @argc: argument  number
 * @argv: argument vector
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
