#include <stdio.h>

/**
 * swap_int - swaps integer values
 * @a: first interger
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
