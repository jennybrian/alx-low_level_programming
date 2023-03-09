#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns natural square rooot of a number
 * @n: number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - claculation of natural square root
 * @n: number
 * @i: iterate number
 *
 * Return: natura square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
