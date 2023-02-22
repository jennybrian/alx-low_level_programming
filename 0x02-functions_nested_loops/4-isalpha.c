#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: characetr to be checked
 * Return: 1 for alphabetic caharcetrs or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
