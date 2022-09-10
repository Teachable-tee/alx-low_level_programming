#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse
 *
 * Description: using the main function
 * this programming prints "Programming is positive, zero or negative"
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
