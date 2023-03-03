#include "main.h"

/**
 * _strncat - concatenates two strings
 * to an atmost n number of bytes
 * @dest: the sting
 * @src: strind to be adde to the first
 * @n: number of bytes from src to be addedd to dest
 * Return: a pointer to reseulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
