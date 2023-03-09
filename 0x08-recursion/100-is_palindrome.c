#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to eb cehcekd
 * Return: lenth f string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares ecah character of teh string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggeset iterator
 * Return: nothing
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if palindrome and o if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
