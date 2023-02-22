#include "main.h"

/**
 *_islower - checks lowercase letters
 *@c: character to be checked
 *Return: 1 if it is owercase and 1 if uppercase
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
