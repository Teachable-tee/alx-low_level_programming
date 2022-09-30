#include <unistd.h>

/**
 * _putchar - written the character c to stdout
 * @c: The charcter to print
 *
 * Return: on sucess 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
