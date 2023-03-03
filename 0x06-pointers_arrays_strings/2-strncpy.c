#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: varibele storing the string cpy
 * @src: teh soouce string
 * @n: maximum number of bytes to be copied
 * Return: a pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
