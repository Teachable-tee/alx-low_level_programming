#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the lowercase of the alphabet
 *
 * Description: using the main function
 * this programming prints "Programming is positive, zero or negative"
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
	if (n != 'q' && n != 'e')
	{
		putchar(n);
	}
	}
	putchar('\n');
	return (0);
}
