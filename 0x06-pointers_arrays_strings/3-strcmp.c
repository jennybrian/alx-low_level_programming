#include "main.h"

/**
 * _strcmp - compares pointers to strings
 * @s1: a pointer to the fisrst string
 * @s2: a pointer to the second string
 * Return: negative difference of first unmatached characetrs
 * positive difference of first unmatached caharacetrs
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
