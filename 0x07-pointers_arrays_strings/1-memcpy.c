#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination
 * @src: the source characters
 * @n: the bytes used
 *
 * Reurn: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
