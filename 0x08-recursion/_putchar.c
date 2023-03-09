#include <unistd.h>

/**
 * _putchar - writes character of C to stdout
 * @c: The character that should be printed
 * Return: 1 on success
 * -1 is returned on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
