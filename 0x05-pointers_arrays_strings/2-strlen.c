#include <stdio.h>

/**
 * _strlen - gives length of string
 * @str: string
 * Return: lenth of string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
