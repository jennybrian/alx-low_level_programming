#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string to be used
 *
 * Return: lenth of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
