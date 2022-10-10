#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: the character to print
 *
 * Result: On success 1
 * On error, -1 is returned, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
