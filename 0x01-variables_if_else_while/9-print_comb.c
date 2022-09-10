#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print all single digit mumbers of base 10
 *
 * Description: using the main function
 * this programming prints "Programming is positive, zero or negative"
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '48' ; n <= '57' ; n++)
	{
		putchar(n);
	if (n != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
