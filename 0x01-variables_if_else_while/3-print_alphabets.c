#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the aplhabet in lowercase, and then uppercase
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
		putchar(n);
	}
	for (n = 'A' ; n <= 'Z' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
