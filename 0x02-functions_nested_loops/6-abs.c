#include "main.h"

/**
 * _abs - computes the absolute value of an ineger
 * @c: interger to be computed
 * Return: absolute value of number
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
